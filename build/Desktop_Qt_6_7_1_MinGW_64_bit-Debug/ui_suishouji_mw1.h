/********************************************************************************
** Form generated from reading UI file 'suishouji_mw1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUISHOUJI_MW1_H
#define UI_SUISHOUJI_MW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_suishouji_mw1
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *suishouji_mw1)
    {
        if (suishouji_mw1->objectName().isEmpty())
            suishouji_mw1->setObjectName("suishouji_mw1");
        suishouji_mw1->resize(800, 600);
        centralwidget = new QWidget(suishouji_mw1);
        centralwidget->setObjectName("centralwidget");
        suishouji_mw1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(suishouji_mw1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        suishouji_mw1->setMenuBar(menubar);
        statusbar = new QStatusBar(suishouji_mw1);
        statusbar->setObjectName("statusbar");
        suishouji_mw1->setStatusBar(statusbar);

        retranslateUi(suishouji_mw1);

        QMetaObject::connectSlotsByName(suishouji_mw1);
    } // setupUi

    void retranslateUi(QMainWindow *suishouji_mw1)
    {
        suishouji_mw1->setWindowTitle(QCoreApplication::translate("suishouji_mw1", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class suishouji_mw1: public Ui_suishouji_mw1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUISHOUJI_MW1_H
