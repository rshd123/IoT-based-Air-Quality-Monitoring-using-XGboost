#include <HardwareSerial.h>

HardwareSerial pmsSerial(2);   // Use UART2

#define RXD2 16   // ESP32 RX2  (connect to PMS TX)
#define TXD2 17   // ESP32 TX2  (connect to PMS RX)

uint8_t buffer[32];

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("PMS7003 Test Starting...");

  pmsSerial.begin(9600, SERIAL_8N1, RXD2, TXD2);
}

void loop() {

  if (pmsSerial.available() >= 32) {

    if (pmsSerial.read() == 0x42) {
      if (pmsSerial.read() == 0x4D) {

        pmsSerial.readBytes(buffer, 30);

        uint16_t pm1  = (buffer[4] << 8) | buffer[5];
        uint16_t pm25 = (buffer[6] << 8) | buffer[7];
        uint16_t pm10 = (buffer[8] << 8) | buffer[9];

        Serial.println("------ Air Quality Data ------");
        Serial.print("PM1.0: ");
        Serial.print(pm1);
        Serial.println(" ug/m3");

        Serial.print("PM2.5: ");
        Serial.print(pm25);
        Serial.println(" ug/m3");

        Serial.print("PM10: ");
        Serial.print(pm10);
        Serial.println(" ug/m3");

        Serial.println("------------------------------");
      }
    }
  }
}
