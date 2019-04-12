#include "timerthread.h"

TimerThread::TimerThread()
{
    idleTime = 5;
    idleTimer = new QTimer(this);
    idleTimer->setInterval(1000);
    connect(idleTimer, SIGNAL(timeout()), this, SLOT(IdleTimeOut()));
    idleTimer->start();
}

void TimerThread::run()
{

}

void TimerThread::IdleTimeOut()
{

    if(idleTime > 0)
    {
    qDebug() << idleTime;
    idleTime--;
    }

    else if (idleTime == 0)
    {
    idleTimer->stop();
    qDebug() << "timeout";
    }
}

void TimerThread::TimerReset()
{
    idleTime = 5;
}

void TimerThread::TimerToggle()
{
    idleTimer->stop();
}
