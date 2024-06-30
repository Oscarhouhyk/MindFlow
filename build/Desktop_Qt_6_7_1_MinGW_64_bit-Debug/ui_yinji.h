/********************************************************************************
** Form generated from reading UI file 'yinji.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YINJI_H
#define UI_YINJI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_yinji
{
public:
    QLabel *qlabel;
    QLabel *label2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label4;
    QLabel *label;
    QLabel *label_4;
    QLabel *label5;
    QLabel *label6;

    void setupUi(QDialog *yinji)
    {
        if (yinji->objectName().isEmpty())
            yinji->setObjectName("yinji");
        yinji->resize(400, 300);
        qlabel = new QLabel(yinji);
        qlabel->setObjectName("qlabel");
        qlabel->setGeometry(QRect(100, 20, 221, 41));
        QFont font;
        font.setPointSize(20);
        qlabel->setFont(font);
        label2 = new QLabel(yinji);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(190, 80, 161, 31));
        label2->setFont(font);
        label_2 = new QLabel(yinji);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 141, 51));
        label_2->setFont(font);
        label_3 = new QLabel(yinji);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 120, 121, 51));
        label_3->setFont(font);
        label4 = new QLabel(yinji);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(190, 130, 171, 31));
        label4->setFont(font);
        label = new QLabel(yinji);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 170, 131, 61));
        label->setFont(font);
        label_4 = new QLabel(yinji);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 170, 31, 61));
        label_4->setFont(font);
        label5 = new QLabel(yinji);
        label5->setObjectName("label5");
        label5->setGeometry(QRect(170, 170, 21, 61));
        label5->setFont(font);
        label6 = new QLabel(yinji);
        label6->setObjectName("label6");
        label6->setGeometry(QRect(230, 170, 21, 61));
        label6->setFont(font);

        retranslateUi(yinji);

        QMetaObject::connectSlotsByName(yinji);
    } // setupUi

    void retranslateUi(QDialog *yinji)
    {
        yinji->setWindowTitle(QCoreApplication::translate("yinji", "Dialog", nullptr));
        qlabel->setText(QCoreApplication::translate("yinji", "0", nullptr));
        label2->setText(QCoreApplication::translate("yinji", "10", nullptr));
        label_2->setText(QCoreApplication::translate("yinji", "\344\273\212\346\227\245\346\224\266\345\205\245\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("yinji", "\344\273\212\346\227\245\346\224\257\345\207\272\357\274\232", nullptr));
        label4->setText(QCoreApplication::translate("yinji", "01", nullptr));
        label->setText(QCoreApplication::translate("yinji", "\344\273\212\346\227\245\345\256\214\346\210\220\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("yinji", "/", nullptr));
        label5->setText(QCoreApplication::translate("yinji", "0", nullptr));
        label6->setText(QCoreApplication::translate("yinji", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yinji: public Ui_yinji {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YINJI_H
