/********************************************************************************
** Form generated from reading UI file 'shouru.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOURU_H
#define UI_SHOURU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_shouru
{
public:
    QRadioButton *radioButton;
    QCalendarWidget *calendarWidget;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QRadioButton *radioButton_4;
    QLabel *label;

    void setupUi(QDialog *shouru)
    {
        if (shouru->objectName().isEmpty())
            shouru->setObjectName("shouru");
        shouru->resize(400, 300);
        shouru->setMinimumSize(QSize(400, 300));
        shouru->setMaximumSize(QSize(400, 300));
        radioButton = new QRadioButton(shouru);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(310, 10, 121, 61));
        calendarWidget = new QCalendarWidget(shouru);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(20, 60, 261, 141));
        lineEdit = new QLineEdit(shouru);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 220, 221, 41));
        radioButton_2 = new QRadioButton(shouru);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(310, 60, 73, 18));
        radioButton_3 = new QRadioButton(shouru);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(310, 90, 73, 18));
        lineEdit_2 = new QLineEdit(shouru);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 20, 121, 31));
        QFont font;
        font.setPointSize(20);
        lineEdit_2->setFont(font);
        pushButton = new QPushButton(shouru);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 220, 91, 31));
        radioButton_4 = new QRadioButton(shouru);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(310, 120, 73, 18));
        label = new QLabel(shouru);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 71, 31));
        label->setFont(font);

        retranslateUi(shouru);

        QMetaObject::connectSlotsByName(shouru);
    } // setupUi

    void retranslateUi(QDialog *shouru)
    {
        shouru->setWindowTitle(QCoreApplication::translate("shouru", "Dialog", nullptr));
        radioButton->setText(QCoreApplication::translate("shouru", "\345\267\245\350\265\204", nullptr));
        radioButton_2->setText(QCoreApplication::translate("shouru", "\345\244\226\345\277\253", nullptr));
        radioButton_3->setText(QCoreApplication::translate("shouru", "\347\220\206\350\264\242", nullptr));
        pushButton->setText(QCoreApplication::translate("shouru", "\347\241\256\345\256\232", nullptr));
        radioButton_4->setText(QCoreApplication::translate("shouru", "\345\205\266\344\273\226", nullptr));
        label->setText(QCoreApplication::translate("shouru", "\351\207\221\351\242\235\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shouru: public Ui_shouru {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOURU_H
