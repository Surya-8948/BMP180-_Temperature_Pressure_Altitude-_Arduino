#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup()
{
  Serial.begin(9600);

  if (!bmp.begin())
  {
    Serial.println("BMP180 Not Found!");
    while (1);
  }

  Serial.println("BMP180 Ready");
}

void loop()
{
  Serial.print("Temperature: ");
  Serial.print(bmp.readTemperature());
  Serial.println(" °C");

  Serial.print("Pressure: ");
  Serial.print(bmp.readPressure());
  Serial.println(" Pa");

  Serial.print("Altitude: ");
  Serial.print(bmp.readAltitude());
  Serial.println(" m");

  Serial.println("-----------------------");

  delay(1000);
}
