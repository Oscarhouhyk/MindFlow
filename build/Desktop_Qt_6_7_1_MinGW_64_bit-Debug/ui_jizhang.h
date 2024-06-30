/********************************************************************************
** Form generated from reading UI file 'jizhang.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JIZHANG_H
#define UI_JIZHANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jizhang
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *cun;
    QPushButton *du;

    void setupUi(QWidget *jizhang)
    {
        if (jizhang->objectName().isEmpty())
            jizhang->setObjectName("jizhang");
        jizhang->resize(400, 300);
        jizhang->setMinimumSize(QSize(400, 300));
        jizhang->setMaximumSize(QSize(400, 300));
        pushButton = new QPushButton(jizhang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 50, 131, 51));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton_3 = new QPushButton(jizhang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 130, 131, 51));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(jizhang);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(210, 130, 141, 51));
        pushButton_4->setFont(font);
        pushButton_2 = new QPushButton(jizhang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 50, 141, 51));
        pushButton_2->setFont(font);
        cun = new QPushButton(jizhang);
        cun->setObjectName("cun");
        cun->setGeometry(QRect(40, 210, 131, 51));
        cun->setFont(font);
        du = new QPushButton(jizhang);
        du->setObjectName("du");
        du->setGeometry(QRect(210, 210, 141, 51));
        du->setFont(font);

        retranslateUi(jizhang);

        QMetaObject::connectSlotsByName(jizhang);
    } // setupUi

    void retranslateUi(QWidget *jizhang)
    {
        jizhang->setWindowTitle(QCoreApplication::translate("jizhang", "Mindflow: \350\256\260\350\264\246\346\234\254", nullptr));
        pushButton->setText(QCoreApplication::translate("jizhang", "\346\224\266\345\205\245", nullptr));
        pushButton_3->setText(QCoreApplication::translate("jizhang", "\346\227\245\346\234\237", nullptr));
        pushButton_4->setText(QCoreApplication::translate("jizhang", "\351\241\271\347\233\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("jizhang", "\346\224\257\345\207\272", nullptr));
        cun->setText(QCoreApplication::translate("jizhang", "\344\277\235\345\255\230", nullptr));
        du->setText(QCoreApplication::translate("jizhang", "\350\257\273\345\217\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jizhang: public Ui_jizhang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JIZHANG_H
