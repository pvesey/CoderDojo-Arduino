// http://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-an-arduino/
// Wiring up.
// DHT11
// Signal - Pin 8 
// +ve - 5V
// -ve - GND

// You will need to install the DHT library to the arduino IDE.


#include <dht.h>

dht DHT;

#define DHT11_PIN 8


void setup() {
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(3000);
}
