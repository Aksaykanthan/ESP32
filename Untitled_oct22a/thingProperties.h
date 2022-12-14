// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "68b15e0d-ce6b-4abc-9932-c8a444967988";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onBulbChange();
void onFanChange();

bool bulb;
bool fan;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(bulb, READWRITE, ON_CHANGE, onBulbChange);
  ArduinoCloud.addProperty(fan, READWRITE, ON_CHANGE, onFanChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
