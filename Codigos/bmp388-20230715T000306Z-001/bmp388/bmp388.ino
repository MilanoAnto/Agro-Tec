#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP3XX.h>

Adafruit_BMP3XX bmp;

void setup() {
  Serial.begin(9600);
  
  if (!bmp.begin_I2C()) {
    Serial.println("No se pudo encontrar el sensor BMP388, verifique la conexión.");
    while (1);
  }
}

void loop() {
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure() / 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Presión: ");
  Serial.print(pressure);
  Serial.println(" hPa");

  Serial.println();

  delay(1000);
}