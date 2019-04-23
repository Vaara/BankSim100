#include "timerthread.h"

TimerThread::TimerThread()
{
    idleTime = 30;
    timeLocked = false;
    idleTimer = new QTimer(this);
    idleTimer->setInterval(1000);
    connect(idleTimer, SIGNAL(timeout()), this, SLOT(idleTimeOut()));
}

TimerThread::~TimerThread()
{
    delete idleTimer;
    idleTimer = nullptr;
    qDebug()<< QString("Timer tuhottu");
}

void TimerThread::run()
{

}

void TimerThread::idleTimeOut()
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
    emit timeOut();

    if(timeLocked == true)
    {
        timeLocked = false;
    }
    }
}

void TimerThread::timerReset()
{
    if(timeLocked != true)
    {
        idleTime = 30;
    }
}

void TimerThread::timerStart()
{
    idleTime = 30;
    idleTimer->start();
}

void TimerThread::timerStart(int setTime)
{
    idleTime = setTime;
    timeLocked = true;
    idleTimer->start();
}

void TimerThread::timerStop()
{
    idleTimer->stop();
}
