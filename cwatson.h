#ifndef CWATSON_H
#define CWATSON_H

#include "cwebrequest.h"

#include <QJsonObject>
#include <QJsonDocument>

// Classe utilitaire IBM

class CWatson
{
public:
    CWatson();
    QByteArray getTTS(QString, QString);
    QString getSTT(QByteArray, QString);

private:
    QString _apiSTT_Key;
    QString _apiSTT_Url;
    QString _apiTTS_Key;
    QString _apiTTS_Url;
    CWebrequest *_request;
};

#endif // CWATSON_H
