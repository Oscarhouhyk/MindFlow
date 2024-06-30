#ifndef RILIXIANSHI_H
#define RILIXIANSHI_H

#include <QDialog>

namespace Ui {
class rilixianshi;
}

class rilixianshi : public QDialog
{
    Q_OBJECT

public:
    explicit rilixianshi(QWidget *parent = nullptr);
    ~rilixianshi();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::rilixianshi *ui;
};

#endif // RILIXIANSHI_H
