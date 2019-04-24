#ifndef TEXTTOSPEECH_H
#define TEXTTOSPEECH_H

#include "texttospeech_global.h"
#include <QtTextToSpeech/QTextToSpeech>
#include <QString>
#include <QWidget>


class TEXTTOSPEECHSHARED_EXPORT TextToSpeech : public QObject
{
    Q_OBJECT
public:
    explicit TextToSpeech(QObject *parent = nullptr);
    ~TextToSpeech();

public slots:
    void rcvStr (QString str);

private:
    QString message;
    QTextToSpeech *m_speech;
    QVector<QVoice> m_voices;
};

#endif //TEXTTOSPEECH_H
