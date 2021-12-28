

#include <Wire.h>

#include "SparkFun_SCD4x_Arduino_Library.h" 
SCD4x mySensor;

void setup()
{
Serial.begin(9600);
Serial.println(F("SCD4x Example"));
Wire.begin();

mySensor.enableDebugging(); // Uncomment this line to get helpful debug messages on Serial

 
if (mySensor.begin() == false)
{
Serial.println(F("Sensor not detected. Please check wiring. Freezing..."));
while (1)
;
}
}

void loop()
{
if (mySensor.readMeasurement()) // readMeasurement will return true when fresh data is available
{
Serial.println();
Serial.print(F("CO2(ppm):"));
Serial.print(mySensor.getCO2());
Serial.print(F("\tTemperature(C):"));
Serial.print(mySensor.getTemperature(), 1);
Serial.print(F("\tHumidity(%RH):"));
Serial.print(mySensor.getHumidity(), 1);
Serial.println();
}
else
Serial.print(F("."));
delay(500);
}
