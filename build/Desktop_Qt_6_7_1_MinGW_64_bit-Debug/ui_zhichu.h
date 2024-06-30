/********************************************************************************
** Form generated from reading UI file 'zhichu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHICHU_H
#define UI_ZHICHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_zhichu
{
public:
    QLabel *label;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *zhichu)
    {
        if (zhichu->objectName().isEmpty())
            zhichu->setObjectName("zhichu");
        zhichu->resize(400, 300);
        zhichu->setMinimumSize(QSize(400, 300));
        zhichu->setMaximumSize(QSize(400, 300));
        label = new QLabel(zhichu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 71, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        calendarWidget = new QCalendarWidget(zhichu);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(20, 60, 241, 151));
        pushButton = new QPushButton(zhichu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 240, 101, 31));
        radioButton = new QRadioButton(zhichu);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(290, 30, 73, 18));
        radioButton_2 = new QRadioButton(zhichu);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(290, 60, 73, 18));
        radioButton_3 = new QRadioButton(zhichu);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(290, 90, 73, 18));
        radioButton_4 = new QRadioButton(zhichu);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(290, 120, 73, 18));
        radioButton_5 = new QRadioButton(zhichu);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(290, 150, 73, 18));
        radioButton_6 = new QRadioButton(zhichu);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(290, 180, 73, 18));
        lineEdit = new QLineEdit(zhichu);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 230, 221, 41));
        lineEdit_2 = new QLineEdit(zhichu);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 20, 151, 31));
        lineEdit_2->setFont(font);

        retranslateUi(zhichu);

        QMetaObject::connectSlotsByName(zhichu);
    } // setupUi

    void retranslateUi(QDialog *zhichu)
    {
        zhichu->setWindowTitle(QCoreApplication::translate("zhichu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("zhichu", "\351\207\221\351\242\235\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("zhichu", "\347\241\256\345\256\232", nullptr));
        radioButton->setText(QCoreApplication::translate("zhichu", "\351\245\256\351\243\237", nullptr));
        radioButton_2->setText(QCoreApplication::translate("zhichu", "\350\264\255\347\211\251", nullptr));
        radioButton_3->setText(QCoreApplication::translate("zhichu", "\344\272\244\351\200\232", nullptr));
        radioButton_4->setText(QCoreApplication::translate("zhichu", "\345\214\273\347\226\227", nullptr));
        radioButton_5->setText(QCoreApplication::translate("zhichu", "\345\250\261\344\271\220", nullptr));
        radioButton_6->setText(QCoreApplication::translate("zhichu", "\345\205\266\344\273\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhichu: public Ui_zhichu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHICHU_H
