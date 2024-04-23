#include <SimpleDHT.h>

//Data pins for the Sensor and the LEDs 
const int dht_pin = D1;
const int LEDT = D2;
const int LEDH = D5;

SimpleDHT11 dht11;

void setup() {

  //Start a serial connection
  Serial.begin(115200);

  //Select the OUTPUT mode for the Datapins of the LEDs
  pinMode(LEDT, OUTPUT);
  pinMode(LEDH, OUTPUT);

}

void loop() {
  //Declare the variables for keeping the readings
  byte temperature = 0;
  byte humidity = 0;

  //Read the current values from the sensor
  dht11.read(dht_pin, &temperature, &humidity, NULL);

  Serial.println();

  //If the temperature is above a certain treshold then light up the Red LED and print the warning
  //Else turn it down
  Serial.print("Warnings: ");
  if (temperature >= 30) {
    Serial.print(" High Temperature! ");
    digitalWrite(LEDT, HIGH);
  } else {
    digitalWrite(LEDT, LOW);
  }

  //If the humidity is above a certain treshold then light up the Yellow LED and print the warning
  //Else turn it down
  if (humidity >= 70) {
    Serial.print(" High Humidity! ");
    digitalWrite(LEDH, HIGH);
  } else {
    digitalWrite(LEDH, LOW);
  }

  //Print the current values
  Serial.println();
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" Degrees C");
  Serial.print(" | Humidity: ");
  Serial.print(humidity);
  Serial.print("%");
  Serial.println();

  //Have a delay of a few seconds
  delay(5000);
}
