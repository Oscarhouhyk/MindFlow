#include "rilixianshi.h"
#include "ui_rilixianshi.h"
#include "sz.h"

rilixianshi::rilixianshi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rilixianshi)
{
    ui->setupUi(this);
}

rilixianshi::~rilixianshi()
{
    delete ui;
}

void rilixianshi::on_calendarWidget_clicked(const QDate &date)
{
    int x1=date.toString("yyyy").toInt();
    int y1=date.toString("M").toInt();
    int z1=date.toString("d").toInt();
    QString s,s2;
    s=QString::asprintf("%.2f",sz::a[x1-2020][y1][z1][0]+0);
    ui->shumu->setText(s);
    s2=QString::asprintf("%.2f",sz::a[x1-2020][y1][z1][1]+0);
    ui->shumu2->setText(s2);
}

