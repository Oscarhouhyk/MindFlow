/********************************************************************************
** Form generated from reading UI file 'xiangmu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIANGMU_H
#define UI_XIANGMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_xiangmu
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *xiangmu)
    {
        if (xiangmu->objectName().isEmpty())
            xiangmu->setObjectName("xiangmu");
        xiangmu->resize(400, 300);
        xiangmu->setMinimumSize(QSize(400, 300));
        xiangmu->setMaximumSize(QSize(400, 300));
        radioButton = new QRadioButton(xiangmu);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(50, 50, 73, 18));
        radioButton_2 = new QRadioButton(xiangmu);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(50, 90, 73, 18));
        radioButton_3 = new QRadioButton(xiangmu);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(50, 130, 73, 18));
        radioButton_4 = new QRadioButton(xiangmu);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(50, 170, 73, 18));
        label = new QLabel(xiangmu);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 230, 101, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(xiangmu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 230, 131, 51));
        label_2->setFont(font);
        radioButton_5 = new QRadioButton(xiangmu);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(260, 50, 73, 18));
        radioButton_6 = new QRadioButton(xiangmu);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(260, 90, 73, 18));
        radioButton_7 = new QRadioButton(xiangmu);
        radioButton_7->setObjectName("radioButton_7");
        radioButton_7->setGeometry(QRect(260, 130, 73, 18));
        radioButton_8 = new QRadioButton(xiangmu);
        radioButton_8->setObjectName("radioButton_8");
        radioButton_8->setGeometry(QRect(260, 170, 73, 18));
        radioButton_9 = new QRadioButton(xiangmu);
        radioButton_9->setObjectName("radioButton_9");
        radioButton_9->setGeometry(QRect(260, 210, 73, 18));
        radioButton_10 = new QRadioButton(xiangmu);
        radioButton_10->setObjectName("radioButton_10");
        radioButton_10->setGeometry(QRect(260, 250, 73, 18));
        label_3 = new QLabel(xiangmu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 0, 71, 61));
        label_3->setFont(font);
        label_4 = new QLabel(xiangmu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, -10, 81, 71));
        label_4->setFont(font);

        retranslateUi(xiangmu);

        QMetaObject::connectSlotsByName(xiangmu);
    } // setupUi

    void retranslateUi(QDialog *xiangmu)
    {
        xiangmu->setWindowTitle(QCoreApplication::translate("xiangmu", "Dialog", nullptr));
        radioButton->setText(QCoreApplication::translate("xiangmu", "\345\267\245\350\265\204", nullptr));
        radioButton_2->setText(QCoreApplication::translate("xiangmu", "\345\244\226\345\277\253", nullptr));
        radioButton_3->setText(QCoreApplication::translate("xiangmu", "\347\220\206\350\264\242", nullptr));
        radioButton_4->setText(QCoreApplication::translate("xiangmu", "\345\205\266\344\273\226\346\224\266\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("xiangmu", "0.00", nullptr));
        label_2->setText(QCoreApplication::translate("xiangmu", "\346\200\273\351\207\221\351\242\235\357\274\232", nullptr));
        radioButton_5->setText(QCoreApplication::translate("xiangmu", "\351\245\256\351\243\237", nullptr));
        radioButton_6->setText(QCoreApplication::translate("xiangmu", "\350\264\255\347\211\251", nullptr));
        radioButton_7->setText(QCoreApplication::translate("xiangmu", "\344\272\244\351\200\232", nullptr));
        radioButton_8->setText(QCoreApplication::translate("xiangmu", "\345\214\273\347\226\227", nullptr));
        radioButton_9->setText(QCoreApplication::translate("xiangmu", "\345\250\261\344\271\220", nullptr));
        radioButton_10->setText(QCoreApplication::translate("xiangmu", "\345\205\266\344\273\226\346\224\257\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("xiangmu", "\346\224\266\345\205\245", nullptr));
        label_4->setText(QCoreApplication::translate("xiangmu", "\346\224\257\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class xiangmu: public Ui_xiangmu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIANGMU_H
