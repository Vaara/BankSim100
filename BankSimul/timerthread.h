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
    ~TimerThread() override;
    void timerReset();
    void timerStop();
    void timerStart(int setTime);

signals:
    void timeOut();

private:
    int idleTime;
    QTimer *idleTimer;
    bool timeLocked;

public slots:
    void timerStart();

private slots:
    void idleTimeOut();

protected:
    virtual void run() override;


};

#endif // TIMERTHREAD_H
;
