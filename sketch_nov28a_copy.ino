#include <ESP8266WiFi.h> 
#include "circuits.h" 
#include "appcontrol.h" //#include "webControl.h" 
void setup() { 
  Serial.begin(115200); 
  delay(10);
  set_circuits(); 
  set_appServer(); 
} 
void loop() { 
  appHandle(); 
}