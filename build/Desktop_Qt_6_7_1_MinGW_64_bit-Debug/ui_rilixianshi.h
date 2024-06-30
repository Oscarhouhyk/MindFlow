/********************************************************************************
** Form generated from reading UI file 'rilixianshi.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RILIXIANSHI_H
#define UI_RILIXIANSHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_rilixianshi
{
public:
    QCalendarWidget *calendarWidget;
    QLabel *shumu;
    QLabel *label;
    QLabel *label_2;
    QLabel *shumu2;

    void setupUi(QDialog *rilixianshi)
    {
        if (rilixianshi->objectName().isEmpty())
            rilixianshi->setObjectName("rilixianshi");
        rilixianshi->resize(400, 300);
        calendarWidget = new QCalendarWidget(rilixianshi);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(30, 30, 331, 181));
        shumu = new QLabel(rilixianshi);
        shumu->setObjectName("shumu");
        shumu->setGeometry(QRect(220, 220, 91, 41));
        QFont font;
        font.setPointSize(20);
        shumu->setFont(font);
        label = new QLabel(rilixianshi);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 220, 131, 41));
        label->setFont(font);
        label_2 = new QLabel(rilixianshi);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 250, 101, 31));
        label_2->setFont(font);
        shumu2 = new QLabel(rilixianshi);
        shumu2->setObjectName("shumu2");
        shumu2->setGeometry(QRect(220, 250, 111, 41));
        shumu2->setFont(font);

        retranslateUi(rilixianshi);

        QMetaObject::connectSlotsByName(rilixianshi);
    } // setupUi

    void retranslateUi(QDialog *rilixianshi)
    {
        rilixianshi->setWindowTitle(QCoreApplication::translate("rilixianshi", "Dialog", nullptr));
        shumu->setText(QCoreApplication::translate("rilixianshi", "0.00", nullptr));
        label->setText(QCoreApplication::translate("rilixianshi", "\346\224\266\345\205\245\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("rilixianshi", "\346\224\257\345\207\272\357\274\232", nullptr));
        shumu2->setText(QCoreApplication::translate("rilixianshi", "0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rilixianshi: public Ui_rilixianshi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RILIXIANSHI_H
