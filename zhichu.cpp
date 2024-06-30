#include "zhichu.h"
#include "ui_zhichu.h"
#include "sz.h"
#include "queren.h"
zhichu::zhichu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::zhichu)
{
    ui->setupUi(this);
}

zhichu::~zhichu()
{
    delete ui;
}

void zhichu::on_calendarWidget_clicked(const QDate &date)
{
    QString str="当前日期为： ";
    str+=date.toString("yyyy-M-d");
    ui->lineEdit->setText(str);
    sz::x=date.toString("yyyy").toInt();
    sz::y=date.toString("M").toInt();
    sz::z=date.toString("d").toInt();

}


void zhichu::on_lineEdit_2_textEdited(const QString &arg1)
{

    double hg=arg1.toDouble();
    QString s;
    s=QString::asprintf("%.2f",hg/100);
    //ui->label->setText(s);
    sz::fz=hg;
}


void zhichu::on_pushButton_clicked()
{
    sz::a[sz::x-2020][sz::y][sz::z][1]+=sz::fz;

    sz::b[sz::p]+=sz::fz;
    queren *w=new queren(this);
    w->show();
}


void zhichu::on_radioButton_clicked()
{
    sz::p=4;
}


void zhichu::on_radioButton_2_clicked()
{
    sz::p=5;
}


void zhichu::on_radioButton_3_clicked()
{
    sz::p=6;
}



void zhichu::on_radioButton_4_clicked()
{
    sz::p=7;
}

void zhichu::on_radioButton_5_clicked()
{
    sz::p=8;
}


void zhichu::on_radioButton_6_clicked()
{
    sz::p=9;
}

