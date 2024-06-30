#include "shouru.h"
#include "ui_shouru.h"
#include "sz.h"
#include "queren.h"
shouru::shouru(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::shouru)
{
    ui->setupUi(this);
}

shouru::~shouru()
{
    delete ui;
}



void shouru::on_calendarWidget_clicked(const QDate &date)
{
    QString str="当前日期为： ";
    str+=date.toString("yyyy-M-d");
    ui->lineEdit->setText(str);
    sz::x=date.toString("yyyy").toInt();
    sz::y=date.toString("M").toInt();
    sz::z=date.toString("d").toInt();

}


void shouru::on_lineEdit_2_textEdited(const QString &arg1)
{

    double hg=arg1.toDouble();
    QString s;
    s=QString::asprintf("%.2f",hg/100);
    //ui->label->setText(s);
    sz::fz=hg;
}


void shouru::on_pushButton_clicked()
{
    sz::a[sz::x-2020][sz::y][sz::z][0]+=sz::fz;

    sz::b[sz::p]+=sz::fz;
    queren *w=new queren(this);
    w->show();
}


void shouru::on_radioButton_clicked()
{
    sz::p=0;
}


void shouru::on_radioButton_2_clicked()
{
    sz::p=1;
}


void shouru::on_radioButton_3_clicked()
{
    sz::p=2;
}



void shouru::on_radioButton_4_clicked()
{
    sz::p=3;
}




