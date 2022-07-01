#include "cwatson.h"

CWatson::CWatson()
{
    this->_request = new CWebrequest();
    this->_apiSTT_Key = "{your_sst_key}";
    this->_apiSTT_Url = "{your_sst_url}";
    this->_apiTTS_Key = "{your_ttx_key}";
    this->_apiTTS_Url = "{your_tts_url}";
}

QByteArray CWatson::getTTS(QString pText, QString pVoice)
{
        QByteArray reponse;
        QString data = "{\"text\":\"" + pText + "\"}";
        QMap<QByteArray, QByteArray> options;
        options.insert("Content-Type", "application/json");
        options.insert("Accept", "audio/wav");

        QString concatenated = "apikey:" + this->_apiTTS_Key;
        QString autorization = "Basic " + concatenated.toLocal8Bit().toBase64();

        options.insert("Authorization", autorization.toLocal8Bit());

        reponse = this->_request->post(this->_apiTTS_Url + "?voice=" + pVoice, data.toUtf8(), options);
        return reponse;
}

QJsonDocument CWatson::getSTT(QByteArray pSpeech, QString pLanguage)
{
    QByteArray reponse;
    QMap<QByteArray, QByteArray> options;
    options.insert("Content-Type", "audio/wav");
    options.insert("Accept", "application/json");

    QString concatenated = "apikey:" + this->_apiSTT_Key;
    QString autorization = "Basic " + concatenated.toLocal8Bit().toBase64();

    options.insert("Authorization", autorization.toLocal8Bit());

    reponse = this->_request->post(this->_apiSTT_Url + "?model=" + pLanguage, pSpeech, options);
    QJsonDocument doc = QJsonDocument::fromJson(reponse);

    return doc;
}
