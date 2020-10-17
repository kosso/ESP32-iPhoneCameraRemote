#include <Arduino.h>

// @kosso 2020.  

// Uses the ESP32-BLE-Keyboard library from https://github.com/T-vK/ESP32-BLE-Keyboard 

#include <BleKeyboard.h>

BleKeyboard bleKeyboard("ESP32-CamRemote", "Espressif", 80); // Name, Manufacturer, battery level (apparently cannot be changed. )

#define BTN_PIN 0 // boot button

void sendVolumeUp(){

  if(bleKeyboard.isConnected()) {

    Serial.println("Sending volume up key ...");
    bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    // See here for other key definitions : https://github.com/T-vK/ESP32-BLE-Keyboard#api-docs

    delay(100);
    bleKeyboard.releaseAll();
  } else {
    Serial.println("not connected ...");
  }

}


void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE");
  bleKeyboard.begin();

  // Use an interrupt to detect the Boot button press (not release. Use 'RISING' for that).
  pinMode(BTN_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BTN_PIN), sendVolumeUp, FALLING);  

}


void loop() {

  delay(100);
  // .. 
}