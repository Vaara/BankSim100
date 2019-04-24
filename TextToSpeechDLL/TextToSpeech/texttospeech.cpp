#include "texttospeech.h"


TextToSpeech::TextToSpeech(QObject *parent) :
    QObject (parent),
    m_speech(nullptr)
{
    m_speech = new QTextToSpeech(this);
}
TextToSpeech::~TextToSpeech()
{
    delete m_speech;
    m_speech = nullptr;
}

void TextToSpeech::rcvStr(QString rcv)
{
    m_speech->say(rcv);
}
