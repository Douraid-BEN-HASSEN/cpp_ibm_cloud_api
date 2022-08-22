# qt_ibm_cloud_api_in_cpp

Simple IBM Cloud api implementation of speech to text and text to speech (SST & TTS)
 [cpp_webrequest](https://github.com/Douraid-BEN-HASSEN/cpp_webrequest)
## Requirements
```
- CWebrequest class [cpp_webrequest](https://github.com/Douraid-BEN-HASSEN/cpp_webrequest)
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
