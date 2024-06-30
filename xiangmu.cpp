#include "xiangmu.h"
#include "ui_xiangmu.h"
#include "sz.h"

xiangmu::xiangmu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::xiangmu)
{
    ui->setupUi(this);
}

xiangmu::~xiangmu()
{
    delete ui;
}

void xiangmu::on_radioButton_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[0]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_2_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[1]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_3_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[2]+0);
    ui->label->setText(s);
}




void xiangmu::on_radioButton_4_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[3]+0);
    ui->label->setText(s);
}




void xiangmu::on_radioButton_5_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[4]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_6_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[5]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_7_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[6]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_8_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[7]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_9_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[8]+0);
    ui->label->setText(s);
}


void xiangmu::on_radioButton_10_clicked()
{
    QString s;
    s=QString::asprintf("%.2f",sz::b[9]+0);
    ui->label->setText(s);
}

