# ESP32-iPhoneCameraRemote

------

A very simple ESP32 demo application which sends the Volume up key when the boot button is pressed (when paired to an iOS device). 

The volume keys can be used on an iPhone to take a photo in the Camera app.

Uses PlatformIO in VSCode. But easy enough to use the same code in an Arduino IDE project. 

### HowTo

- See: `BleKeyboard` initialisation in `main.cpp` for naming options.
- Open Bluetooth settings on the the iPhone and pair with the device. 
- Open Camera app.
- Say cheese.
- Click the ESP32 Boot button.

-----

Tested on an iPhoneXR on iOS14.

Uses the excellent ESP32-BLE-Keyboard library from @T-vk

https://github.com/T-vK/ESP32-BLE-Keyboard

----


@kosso 2020

