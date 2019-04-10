#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H
#include <QThread>
#include <QWidget>
#include <QTimer>

class TimerThread: public QThread
{
Q_OBJECT

public:
    TimerThread();

private:
    int idleTime;
    QTimer *idleTimer;

private slots:
    void idleTimeOut();

protected:
    virtual void run() override;
};

#endif // TIMERTHREAD_H
;
