#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2  // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11  // DHT sensor type (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: " + String(temperature, 1) + " C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: " + String(humidity, 1) + " %");

  delay(2000);  // Update every 2 seconds
}
