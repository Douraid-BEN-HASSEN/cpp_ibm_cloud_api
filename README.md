# qt_ibm_cloud_api_in_cpp

Simple IBM Cloud api implementation of speech to text and text to speech (SST & TTS)

## Requirements
```
- CWebrequest class https://gitlab.com/Douraid.B/qt_web_request_in_cpp
```


## Example
```
// Text To Speech
CWatson *watson = new CWatson();
QByteArray result = watson->getTTS("Test", "fr-FR_ReneeV3Voice");
```

```
// Speech To Text
CWatson *watson = new CWatson();
QString result = watson->getSTT("Test", "fr-FR_BroadbandModel");
```
