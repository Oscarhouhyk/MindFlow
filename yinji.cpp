#include "yinji.h"
#include "ui_yinji.h"
#include "QDate"
#include "QFile"
#include "sz.h"
#include "QString"

QDate currentDate = QDate::currentDate();
int year = currentDate.year();
int month = currentDate.month();
int day = currentDate.day();
yinji::yinji(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::yinji)
{
    ui->setupUi(this);

    ui->qlabel->setText(currentDate.toString("yyyy-MM-dd"));
    QString s=QString::asprintf("%.2f",sz::a[year-2020][month][day][0]+0);
    ui->label2->setText(s);
    QString s1=QString::asprintf("%.2f",sz::a[year-2020][month][day][1]+0);
    ui->label4->setText(s1);
    QString s5=QString::asprintf("%d",sz::shan+0);
    ui->label5->setText(s5);
    QString s6=QString::asprintf("%d",sz::zong+0);
    ui->label6->setText(s6);

    QIcon icon = QApplication::style()->standardIcon((QStyle::StandardPixmap)0);
    QIcon icon1 = QApplication::style()->standardIcon((QStyle::StandardPixmap)9);

    //设置通知栏的图标
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(icon);

    //设置通知栏的单击事件
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(stTrayIconActive(QSystemTrayIcon::ActivationReason)));

    //设置通知栏的右键菜单
    QMenu * menu = new QMenu();

    //设置菜单项目
    QAction *actionHide = new QAction(icon, "Hide", menu);

    menu->addAction(actionHide);
    trayIcon->setContextMenu(menu);
    // 设置Action的响应
    connect(actionHide, SIGNAL(triggered()), this, SLOT(stActionHide()));
    trayIcon->show();

    //托盘的消息提示
    trayIcon->showMessage("夜色已深","让我们共同期待美好的明天再相会~", icon1);
}

yinji::~yinji()
{
    delete ui;
}
void yinji::stTrayIconActive(QSystemTrayIcon::ActivationReason acReason)
{
    switch (acReason)
    {
    case QSystemTrayIcon::Trigger:
    {
        showNormal();
        break;
    }
    default:
        ;
    }
}



