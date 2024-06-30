#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QPropertyAnimation>
#include <QLabel>
#include <QTimer>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(int endAngle READ endAngle WRITE setEndAngle NOTIFY endAngleChanged)

    int m_startAngle;
    int m_endAngle;
    QPropertyAnimation* animation;

    void DrawCirqle(QPainter& painter);
    void ProgressBarColorSet(QPainter& painter);

    bool reset,firstTime = true,rest;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent(QPaintEvent* );

    int endAngle() const
    {
        return m_endAngle;
    }
    void setEndAngle(const int& endAngle)
    {
        m_endAngle = endAngle;
        update();
    }

    inline void onClockTime();
    inline void startClock();
    inline void Addtime();
    inline void Subtime();
    inline void ResetTime();

signals:
    void endAngleChanged(int Angle);

private slots:
    void on_pushButton_todo_clicked();

    void on_pushButton_suishouji_clicked();

    void on_pushButton_jizhang_clicked();

    void on_pushButton_yinji_clicked();

private:
    Ui::Widget *ui;

    QPushButton AddMin,SubMin;
    QPushButton Start;
    QPushButton Reset;

    QLabel timedisplayer, timeoutdisplayer, tip1;
    QTimer timer;

    int time, timeout, timeout2;
    bool StartOrNot, sate;
};


#endif // WIDGET_H
