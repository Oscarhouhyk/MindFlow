#ifndef YINJI_H
#define YINJI_H

#include <QDialog>
#include <QSystemTrayIcon>
#include <QImage>
#include <QPixmap>
#include <QMenu>
#include <QIcon>
#include <QAction>
#include <QStyle>

namespace Ui {
class yinji;
}

class yinji : public QDialog
{
    Q_OBJECT

public:
    explicit yinji(QWidget *parent = nullptr);
    ~yinji();
public:
    QSystemTrayIcon *trayIcon;
private slots:
    void stTrayIconActive(QSystemTrayIcon::ActivationReason acReason);


private:
    Ui::yinji *ui;
};

#endif // YINJI_H
