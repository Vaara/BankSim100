#ifndef TEXTTOSPEECH_GLOBAL_H
#define TEXTTOSPEECH_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEXTTOSPEECH_LIBRARY)
#  define TEXTTOSPEECHSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEXTTOSPEECHSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEXTTOSPEECH_GLOBAL_H