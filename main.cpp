#include "widget.h"
#include "sz.h"

#include <QApplication>

int sz::x=0;
int sz::y=0;
int sz::z=0;
int sz::p=-1;
double sz::fz=0.0;
double sz::a[10][13][32][2]={0.0};
double sz::b[20]={0.0};
int sz::zong=0;
int sz::shan=0;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
