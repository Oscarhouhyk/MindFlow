/********************************************************************************
** Form generated from reading UI file 'queren.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEREN_H
#define UI_QUEREN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_queren
{
public:
    QLabel *label;

    void setupUi(QDialog *queren)
    {
        if (queren->objectName().isEmpty())
            queren->setObjectName("queren");
        queren->resize(400, 73);
        label = new QLabel(queren);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 281, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(queren);

        QMetaObject::connectSlotsByName(queren);
    } // setupUi

    void retranslateUi(QDialog *queren)
    {
        queren->setWindowTitle(QCoreApplication::translate("queren", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("queren", "***\350\256\260*\345\275\225*\346\210\220*\345\212\237***", nullptr));
    } // retranslateUi

};

namespace Ui {
    class queren: public Ui_queren {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEREN_H
