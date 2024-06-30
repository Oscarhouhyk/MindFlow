/********************************************************************************
** Form generated from reading UI file 'suishouji_mw2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUISHOUJI_MW2_H
#define UI_SUISHOUJI_MW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_suishouji_mw2
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *suishouji_mw2)
    {
        if (suishouji_mw2->objectName().isEmpty())
            suishouji_mw2->setObjectName("suishouji_mw2");
        suishouji_mw2->resize(800, 600);
        centralwidget = new QWidget(suishouji_mw2);
        centralwidget->setObjectName("centralwidget");
        suishouji_mw2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(suishouji_mw2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        suishouji_mw2->setMenuBar(menubar);
        statusbar = new QStatusBar(suishouji_mw2);
        statusbar->setObjectName("statusbar");
        suishouji_mw2->setStatusBar(statusbar);

        retranslateUi(suishouji_mw2);

        QMetaObject::connectSlotsByName(suishouji_mw2);
    } // setupUi

    void retranslateUi(QMainWindow *suishouji_mw2)
    {
        suishouji_mw2->setWindowTitle(QCoreApplication::translate("suishouji_mw2", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class suishouji_mw2: public Ui_suishouji_mw2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUISHOUJI_MW2_H
