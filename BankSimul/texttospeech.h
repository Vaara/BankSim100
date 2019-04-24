#ifndef TEXTTOSPEECH_H
#define TEXTTOSPEECH_H

#include <QtTextToSpeech/QTextToSpeech>
#include <QString>
#include <QWidget>

class TextToSpeech
{
public:
    TextToSpeech();
};

class Jorma : public QObject
{
    Q_OBJECT
public:
    explicit Jorma(QObject *parent = nullptr);
    ~Jorma();

public slots:
    void rcvStr (QString str);

private:
    QString message;
    QTextToSpeech *m_speech;
    QVector<QVoice> m_voices;
};

#endif // JORMA_H
