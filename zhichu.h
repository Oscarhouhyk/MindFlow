#ifndef ZHICHU_H
#define ZHICHU_H

#include <QDialog>

namespace Ui {
class zhichu;
}

class zhichu : public QDialog
{
    Q_OBJECT

public:
    explicit zhichu(QWidget *parent = nullptr);
    ~zhichu();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_lineEdit_2_textEdited(const QString &arg1);

private:
    Ui::zhichu *ui;
};

#endif // ZHICHU_H
