/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_todo;
    QPushButton *pushButton_jizhang;
    QPushButton *pushButton_suishouji;
    QPushButton *pushButton_yinji;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        Widget->setMinimumSize(QSize(800, 600));
        Widget->setMaximumSize(QSize(800, 600));
        pushButton_todo = new QPushButton(Widget);
        pushButton_todo->setObjectName("pushButton_todo");
        pushButton_todo->setGeometry(QRect(30, 30, 180, 50));
        pushButton_todo->setMinimumSize(QSize(180, 50));
        pushButton_todo->setMaximumSize(QSize(180, 50));
        QFont font;
        font.setPointSize(20);
        pushButton_todo->setFont(font);
        pushButton_jizhang = new QPushButton(Widget);
        pushButton_jizhang->setObjectName("pushButton_jizhang");
        pushButton_jizhang->setGeometry(QRect(30, 520, 180, 50));
        pushButton_jizhang->setMinimumSize(QSize(180, 50));
        pushButton_jizhang->setMaximumSize(QSize(180, 50));
        pushButton_jizhang->setFont(font);
        pushButton_suishouji = new QPushButton(Widget);
        pushButton_suishouji->setObjectName("pushButton_suishouji");
        pushButton_suishouji->setGeometry(QRect(590, 30, 180, 50));
        pushButton_suishouji->setMinimumSize(QSize(180, 50));
        pushButton_suishouji->setMaximumSize(QSize(180, 50));
        pushButton_suishouji->setFont(font);
        pushButton_yinji = new QPushButton(Widget);
        pushButton_yinji->setObjectName("pushButton_yinji");
        pushButton_yinji->setGeometry(QRect(590, 520, 180, 50));
        pushButton_yinji->setMinimumSize(QSize(180, 50));
        pushButton_yinji->setMaximumSize(QSize(180, 50));
        pushButton_yinji->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_todo->setText(QCoreApplication::translate("Widget", "TO-DO LIST", nullptr));
        pushButton_jizhang->setText(QCoreApplication::translate("Widget", "\350\256\260\350\264\246\346\234\254", nullptr));
        pushButton_suishouji->setText(QCoreApplication::translate("Widget", "\351\232\217\346\211\213\350\256\260", nullptr));
        pushButton_yinji->setText(QCoreApplication::translate("Widget", "\344\273\212\346\227\245\345\215\260\350\256\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
