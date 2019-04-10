#include "timerthread.h"

TimerThread::TimerThread()
{

}

void TimerThread::run()
{
    idleTime = 60;
    idleTimer = new QTimer(this);
    QObject::connect(idleTimer, SIGNAL(timeout()), this, SLOT(idleTimeOut()));
    idleTimer->setInterval(1000);
    idleTimer->start();
}


void TimerThread::idleTimeOut()
{

    if(idleTime > 0)
    {
    idleTime--;
    }

    else if (idleTime == 0)
    {
    idleTimer->stop();
    }
}


