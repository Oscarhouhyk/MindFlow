#ifndef SHOURU_H
#define SHOURU_H

#include <QDialog>

namespace Ui {
class shouru;
}

class shouru : public QDialog
{
    Q_OBJECT

public:
    explicit shouru(QWidget *parent = nullptr);
    ~shouru();

private slots:
    void on_pushButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();


private:
    Ui::shouru *ui;
};

#endif // SHOURU_H
