Arduino Temperature Monitor 

A simple project that uses an LM35 temperature sensor and an Arduino to measure temperature. The system reads the sensor output turns it into a temperature value in Celsius and shows the result on the Serial Monitor.

Project Overview

The goal of this project is to read the analog signal from an LM35 temperature sensor. The Arduino takes this signal converts it into a voltage into a temperature reading in Celsius. This temperature is sent to the Arduino Serial Monitor for viewing.

Components Required
Arduino Uno
LM35 Temperature Sensor
Breadboard
Jumper Wires

All of these parts are easy to get and work together. They are perfect for beginners learning about sensors and microcontrollers.

 Working Principle

The LM35 sensor gives out an analog voltage that changes with temperature. For every degree Celsius the voltage increases by 10 millivolts. So at 25 degrees the output is 250 millivolts. The Arduino can read this analog voltage through its analog input pin.

The Arduino:

1. Reads the analog voltage from the LM35.

2. Converts the raw analog value into voltage.

3. Uses the formula `voltage / 0.01` to find the temperature in Celsius.

4. Sends the number to the Serial Monitor so we can see it.

This process repeats every second giving us an update.

 Software

We use the Arduino IDE to write and upload code. The language used is a mix of C++ and embedded C. It's straightforward and widely supported. The code runs directly on the Arduino board. Handles all the data processing.

 How to Run

To start the project follow these steps:

1. Place the LM35 sensor on the breadboard.

2. Connect the sensors VCC to 5 volts on the Arduino.

3. Connect the sensors ground to the Arduino ground.

4. Connect the sensors output to analog pin A0 on the Arduino.

5. Open the file `temperature_monitor.ino`, in the Arduino IDE.

6. Select the board: "Arduino Uno".

7. Pick the COM port where the Arduino is connected.

8. Click the Upload button to send the code to the Arduino.

9. Open the Serial Monitor in the Arduino IDE.

10. Set the baud rate to **9600**.

After that the temperature will appear on the screen every second. It updates automatically. Shows real-time values.
