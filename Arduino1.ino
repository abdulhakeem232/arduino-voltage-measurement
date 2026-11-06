const int voltagePin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(voltagePin);

  float voltage = sensorValue * (5.0 / 1023.0);

  Serial.print("Analog Reading: ");
  Serial.print(sensorValue);

  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);
  Serial.println(" V");

  delay(500);
}