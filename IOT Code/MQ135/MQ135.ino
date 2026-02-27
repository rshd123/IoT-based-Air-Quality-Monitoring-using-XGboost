// ================= MQ135 =================
// VCC → VIN (5V)
// GND → GND
// A0 → GPIO34
#define MQ135_PIN 34   // Analog pin

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("MQ135 Sensor Test Starting...");
}

void loop() {
  int sensorValue = analogRead(MQ135_PIN);

  Serial.print("Analog Value: ");
  Serial.println(sensorValue);

  delay(1000);
}