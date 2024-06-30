#ifndef XIANGMU_H
#define XIANGMU_H

#include <QDialog>

namespace Ui {
class xiangmu;
}

class xiangmu : public QDialog
{
    Q_OBJECT

public:
    explicit xiangmu(QWidget *parent = nullptr);
    ~xiangmu();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();



    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_10_clicked();

private:
    Ui::xiangmu *ui;
};

#endif // XIANGMU_H
