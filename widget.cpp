#include "widget.h"
#include "ui_widget.h"
#include "todolist.h"
#include "suishouji_mw1.h"
#include "jizhang.h"
#include "yinji.h"
#include "sz.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
    time(0), StartOrNot(false), timeout(25 * 60), sate(true)
{
    ui->setupUi(this);
    this -> setWindowTitle("心流  Mindflow");

    //tomato clock ui:
    //this -> setWindowFlag(Qt::WindowStaysOnTopHint);
    // this -> setStyleSheet("background-color: rgb(0,0,0);");
    //350,275 mid point

    Start.setParent(this);  //开始按键
    Start.move(350,400);
    Start.resize(100,50);
    Start.setText("开始");
    Start.setStyleSheet("QPushButton {"
                        "   background-color: rgb(82,181,254);"
                        "   font-family:\"Microsoft YaHei\";"
                        "   font: bold;"
                        "   font-size: 20px;"
                        "   color: rgb(255,255,255);"
                        "   border-style: solid;"
                        "   border-radius: 5px;"
                        "}"
                        "QPushButton:hover {"
                        "   background-color:rgb(101,200,255);"
                        "}");

    AddMin.setParent(this);  //加时间按键
    AddMin.setText("+");
    AddMin.move(320,200);
    AddMin.resize(30, 30);
    AddMin.setStyleSheet("QPushButton {"
                         "  background-color: rgb(255,255,255);"
                         "  font-family: \"Microsoft YaHei\";"
                         "  font: bold;"
                         "  font-size: 25px;"
                         "  color: rgb(82,181,254);"
                         "  border-style: solid;"
                         "  border-radius: 2px;"
                         "  border-width: 1px;"
                         "}"
                         "QPushButton:pressed {"
                         "  background-color: rgb(101,200,255);"
                         "  border-color: rgb(255,255,255);"
                         "  color: rgb(255,255,255);"
                         "}");

    SubMin.setParent(this);  //减时间按键
    SubMin.setText("-");
    SubMin.move(453,200);
    SubMin.resize(30, 30);
    SubMin.setStyleSheet("QPushButton {"
                         "  background-color: rgb(255,255,255);"
                         "  font-family: \"Microsoft YaHei\";"
                         "  font: bold;"
                         "  font-size: 25px;"
                         "  color: rgb(82,181,254);"
                         "  border-style: solid;"
                         "  border-radius: 2px;"
                         "  border-width: 1px;"
                         "}"
                         "QPushButton:pressed {"
                         "  background-color: rgb(101,200,255);"
                         "  border-color: rgb(255,255,255);"
                         "  color: rgb(255,255,255);"
                         "}");

    timedisplayer.setParent(this); //时钟数字
    timedisplayer.move(275, 250);
    timedisplayer.resize(250, 100);
    timedisplayer.setStyleSheet("QLabel {"
                                "   color:rgb(82,181,254);"
                                "   font-family:\"Microsoft YaHei\";"
                                "   font: bold 20px;"
                                "   font-size: 80px"
                                "}");
    timedisplayer.setText("00:00");
    timedisplayer.setAlignment(Qt::AlignHCenter);

    timeoutdisplayer.setParent(this); //设置分钟数字
    timeoutdisplayer.move(350, 200);
    timeoutdisplayer.resize(100, 30);
    timeoutdisplayer.setStyleSheet("QLabel {"
                                   "   color:rgb(82,181,254);"
                                   "   font-family:\"Microsoft YaHei\";"
                                   "   font: bold 20px;"
                                   "   font-size: 25px"
                                   "}");
    timeoutdisplayer.setText(QString::number(timeout/60, 10)+" min");
    timeoutdisplayer.setAlignment(Qt::AlignHCenter);

    tip1.setParent(this); //番茄钟状态标示语
    tip1.move(350,135);
    tip1.resize(100, 50);
    tip1.setStyleSheet("QLabel {"
                       "   color:rgb(82,181,254);"
                       "   font-family:\"Microsoft YaHei\";"
                       "   font-size: 30px"
                       "}");
    tip1.setText("番茄钟");
    tip1.setAlignment(Qt::AlignHCenter);

    Reset.setParent(this); //计时重置按键
    Reset.move(350,200);
    Reset.resize(100,50);
    Reset.setText("重置");
    Reset.setStyleSheet("QPushButton {"
                        "   background-color: rgb(82,181,254);"
                        "   font-family:\"Microsoft YaHei\";"
                        "   font: bold;"
                        "   font-size: 20px;"
                        "   color: rgb(255,255,255);"
                        "   border-style: solid;"
                        "   border-radius: 5px;"
                        "}"
                        "QPushButton:hover {"
                        "   background-color:rgb(101,200,255);"
                        "}");
    Reset.hide();  //重置按键初始隐藏

    //连接槽函数
    connect(&timer, &QTimer::timeout, this, &Widget::onClockTime); //计时器
    connect(&Start, &QPushButton::released, this, &Widget::startClock); //按键s
    connect(&AddMin, &QPushButton::released, this, &Widget::Addtime);
    connect(&SubMin, &QPushButton::released, this, &Widget::Subtime);
    connect(&Reset, &QPushButton::released, this, &Widget::ResetTime);

    animation = new QPropertyAnimation(this, "endAngle"); //番茄钟进度条初始化
    animation->setDuration(900); //动画时长
    animation->setStartValue(0); //属性的起始值
    animation->setEndValue(1);   //最终值 i.e.从哪里画到哪里
}

Widget::~Widget()
{
    timer.stop();
    delete ui;
}

void Widget::DrawCirqle(QPainter& painter)  //绘制圆环底框
{
    painter.save();
    painter.translate(width() / 2, height() / 2);

    QPen pen;
    pen.setWidth(20);  //笔大小
    pen.setJoinStyle(Qt::RoundJoin); //设置圆弧连接处为圆形
    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(Qt::gray);
    painter.setPen(pen);

    //QRect rect(-(height() / 4), -(height() / 4), (height() / 2), (height() / 2));
    //painter.drawArc(rect, 0, 360 * 16);/*外部圆弧*/
    QRectF rectangle1(-200, -200, 400, 400);
    painter.drawEllipse(rectangle1);

    painter.restore();
}

void Widget::ProgressBarColorSet(QPainter& painter)  //绘制圆环进度条
{
    painter.save();
    painter.translate(width() / 2, height() / 2);
    QPen pen;
    pen.setWidth(20);
    pen.setJoinStyle(Qt::RoundJoin);
    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(Qt::red);
    painter.setPen(pen);

    QRectF rectangle1(-200, -200, 400, 400);
    painter.drawArc(rectangle1, m_startAngle * 16, -m_endAngle * 16);

    if (reset) {
        pen.setColor(Qt::gray);
        painter.setPen(pen);
        painter.drawEllipse(rectangle1);
    }
    if (rest) {
        pen.setColor(Qt::yellow);
        painter.setPen(pen);
        painter.drawEllipse(rectangle1);
    }

    painter.restore();
}

void Widget::paintEvent(QPaintEvent* ){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true); //设置抗锯齿
    DrawCirqle(painter);
    ProgressBarColorSet(painter);
}

/*________________tomato clock_________________________________________________________________________*/

inline void Widget::onClockTime() {  //计时器
    if((time < timeout)&&sate == true) {
        if(time/60 < 10 && time%60 < 10)
            timedisplayer.setText("0"+QString::number(time/60, 10)+":"+"0"+QString::number(time%60, 10));
        else if (time/60 < 10)
            timedisplayer.setText("0"+QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        else if (time%10 < 10)
            timedisplayer.setText(QString::number(time/60, 10)+":"+"0"+QString::number(time%60, 10));
        else timedisplayer.setText(QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        time++;
        if (time == timeout/10){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *2){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *3){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *4){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *5){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *6){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *7){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *8){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == (timeout/10) *9){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }
        if(time == timeout-1){
            animation->setStartValue(m_endAngle);
            animation->setEndValue(m_endAngle + 36);
            setEndAngle(m_endAngle + 36);
            animation->start();
        }

    }else {
        if(sate == true) { //排除法
            update();
            rest = true;
            time = sate = 0;
            timeout2 = timeout;
            timeout = 10 * 60;
            tip1.setText("休息中");
        }
    }

    if((time < timeout)&&sate == false) {
        if(time/60 < 10 && time%60 < 10)
            timedisplayer.setText("0"+QString::number(time/60, 10)+":"+"0"+QString::number(time%60, 10));
        else if (time/60 < 10)
            timedisplayer.setText("0"+QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        else if (time%10 < 10)
            timedisplayer.setText(QString::number(time/60, 10)+":"+"0"+QString::number(time%60, 10));
        else timedisplayer.setText(QString::number(time/60, 10)+":"+QString::number(time%60, 10));
        time++;

    }else {
        if(sate == false) {
            time = 0;
            sate = 1;
            timeout = timeout2;
            tip1.setText("工作中");
            rest = false;
        }
    }

}

inline void Widget::startClock() {
    reset = false;
    rest = false;
    timeoutdisplayer.hide();
    AddMin.hide();
    SubMin.hide();
    tip1.setText("工作中");

    if(StartOrNot != true) {
        timer.start(1000);
        Start.setText("停止");
        tip1.setText("工作中");
        StartOrNot = !StartOrNot;
        Reset.hide();
        if (firstTime){
            animation->start();
            firstTime = false;
        }

    }else {
        timer.stop();
        Start.setText("开始");
        tip1.setText("暂停中");
        StartOrNot = !StartOrNot;
        Reset.show();
    }
}

inline void Widget::Addtime() {
    timeout += 60;
    timeoutdisplayer.setText(QString::number(timeout/60, 10)+" min");
}

inline void Widget::Subtime() {
    if(timeout>60){
        timeout -=60;
    }else{
        timeout = 60;
    }
    timeoutdisplayer.setText(QString::number(timeout/60, 10)+" min");
}

inline void Widget::ResetTime(){  //一次重置
    update();
    reset = true;
    timer.stop();
    time = 0;
    timeout = 25*60;
    timedisplayer.setText("00:00");
    timeoutdisplayer.setText(QString::number(timeout/60, 10)+" min");
    StartOrNot = false;
    Reset.hide();
    timeoutdisplayer.show();
    AddMin.show();
    SubMin.show();
    tip1.setText("番茄钟");

    animation = new QPropertyAnimation(this, "endAngle"); //新动画
    animation->setDuration(900);
    animation->setStartValue(0);
    animation->setEndValue(1);
    m_endAngle = 0;

    reset = false;
    firstTime = true;
}

/*---------------------------------------------------------------------------*/

//按键反应槽函数
void Widget::on_pushButton_todo_clicked()
{
    ToDoList *w1 = new ToDoList(this);
    w1->show();
    sz::zong=0;
    sz::shan=0;
}

void Widget::on_pushButton_suishouji_clicked()
{
    suishouji_mw1 *w3 = new suishouji_mw1(this);
    w3->show();
}


void Widget::on_pushButton_jizhang_clicked()
{
    jizhang *w2 = new jizhang(this);
    w2->show();
}


void Widget::on_pushButton_yinji_clicked()
{
    yinji *w=new yinji(this);
    w->show();

}

