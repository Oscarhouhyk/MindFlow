#ifndef QUEREN_H
#define QUEREN_H

#include <QDialog>

namespace Ui {
class queren;
}

class queren : public QDialog
{
    Q_OBJECT

public:
    explicit queren(QWidget *parent = nullptr);
    ~queren();

private:
    Ui::queren *ui;
};

#endif // QUEREN_H
