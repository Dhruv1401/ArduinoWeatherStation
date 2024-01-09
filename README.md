# Simple Weather Station

A simple Arduino project for a weather station that displays real-time temperature and humidity on an LCD. The project uses a DHT11 or DHT22 sensor for temperature and humidity measurements and a 16x2 LCD with an I2C interface for display.

## Table of Contents

- [Components Needed](#components-needed)
- [Connections](#connections)
- [Arduino Sketch](#arduino-sketch)
- [Setup Instructions](#setup-instructions)
- [Usage](#usage)
- [License](#license)

## Components Needed

1. Arduino board (e.g., Arduino Uno)
2. DHT11 or DHT22 temperature and humidity sensor
3. 16x2 LCD display with I2C interface
4. Breadboard and jumper wires

## Connections

1. **DHT Sensor Connections:**
   - Connect the sensor's VCC to 5V on the Arduino.
   - Connect the sensor's GND to GND on the Arduino.
   - Connect the sensor's data pin to a digital pin on the Arduino (e.g., D2).

2. **LCD with I2C Interface Connections:**
   - Connect the SDA pin to A4 on the Arduino.
   - Connect the SCL pin to A5 on the Arduino.
   - Connect VCC and GND of the LCD to the corresponding pins on the Arduino.

## Arduino Sketch

The main Arduino sketch file is `SimpleWeatherStation.ino`. The project uses two libraries:
- DHT sensor library for interfacing with the temperature and humidity sensor.
- LiquidCrystal_I2C library for controlling the LCD with I2C interface.

## Setup Instructions

1. Connect the components following the provided connections.
2. Install the required libraries using the Arduino IDE Library Manager.
3. Upload the `SimpleWeatherStation.ino` sketch to your Arduino board.

## Usage

Open the Serial Monitor in the Arduino IDE to view real-time temperature and humidity readings. The LCD will display the same information.

## License

This project is licensed under the [MIT License](extras/LICENSE.txt).
