#ifndef JIZHANG_H
#define JIZHANG_H

#include <QWidget>

namespace Ui {
class jizhang;
}

class jizhang : public QWidget
{
    Q_OBJECT

public:
    explicit jizhang(QWidget *parent = nullptr);
    ~jizhang();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_cun_clicked();

    void on_du_clicked();

private:
    Ui::jizhang *ui;
};

#endif // JIZHANG_H
