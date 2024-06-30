#include "jizhang.h"
#include "ui_jizhang.h"
#include "shouru.h"
#include "zhichu.h"
#include "rilixianshi.h"
#include "xiangmu.h"
#include "sz.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

jizhang::jizhang(QWidget *parent)
    :ui(new Ui::jizhang)
{
    ui->setupUi(this);
}

jizhang::~jizhang()
{
    delete ui;
}

void jizhang::on_pushButton_clicked()
{
    shouru *w=new shouru(this);
    w->show();
}


void jizhang::on_pushButton_2_clicked()
{
    zhichu * w1=new zhichu(this);
    w1->show();
}


void jizhang::on_pushButton_3_clicked()
{
    rilixianshi * w1=new rilixianshi(this);
    w1->show();
}


void jizhang::on_pushButton_4_clicked()
{
    xiangmu * w1=new xiangmu(this);
    w1->show();
}

void jizhang::on_cun_clicked()
{
    QFile file("data.txt");
    if(file.open(QFile::WriteOnly | QFile::Truncate)){

                QTextStream filestream(&file);//QTextStream 与file关联
                for(int i=0;i<10;i++){
                    for(int j=0;j<13;j++){
                        for(int k=0;k<32;k++){
                            filestream<<sz::a[i][j][k][0]<<" "<<sz::a[i][j][k][1]<<" ";
                        }
                    }
                }
                filestream<<"\n";
                for(int i=0;i<20;i++){
                    filestream<<sz::b[i]<<" ";
                }
                filestream<<"\n";
                filestream<<sz::fz<<" "<<sz::x<<" "<<sz::y<<" "<<sz::z<<" "<<sz::p<<"\n";
            }
            file.close();
}


void jizhang::on_du_clicked()
{
    QFile file("data.txt");
    if(file.open(QFile::ReadOnly | QFile::Truncate)){
        QTextStream filestream(&file);//QTextStream 与file关联
        for(int i=0;i<10;i++){
            for(int j=0;j<13;j++){
                for(int k=0;k<32;k++){
                    filestream>>sz::a[i][j][k][0]>>sz::a[i][j][k][1];
                }
            }
        }
        for(int i=0;i<20;i++){
            filestream>>sz::b[i];
        }
        filestream>>sz::fz>>sz::x>>sz::y>>sz::z>>sz::p;
    }
    file.close();
}

