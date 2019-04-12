#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H
#include <QThread>
#include <QTimer>
#include <QDebug>

class TimerThread: public QThread
{
Q_OBJECT

public:
    TimerThread();
    void TimerReset();
    void TimerToggle();

private:
    int idleTime;
    QTimer *idleTimer;

private slots:
    void IdleTimeOut();

protected:
    virtual void run() override;
};

#endif // TIMERTHREAD_H
;
