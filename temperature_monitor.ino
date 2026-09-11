// Arduino Temperature Monitor
// Sensor: LM35
// Output: Serial Monitor

const int temperaturePin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(temperaturePin);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
