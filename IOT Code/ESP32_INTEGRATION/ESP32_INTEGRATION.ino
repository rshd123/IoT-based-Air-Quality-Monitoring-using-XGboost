#include <WiFi.h>
#include <DHT.h>
#include <HardwareSerial.h>
#include "xgb_model.h"   // Your converted XGBoost model

// ===== WIFI =====
const char* ssid = "Airtel_mush_1896";
const char* password = "CfarithaC@1";

// ===== DHT11 =====
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ===== MQ135 =====
#define MQ135_PIN 34

// ===== PMS7003 =====
HardwareSerial pmsSerial(2);
#define PMS_RX 16
#define PMS_TX 17

uint8_t buffer[32];

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("IoT Air Monitoring System Starting...");

  dht.begin();

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  pmsSerial.begin(9600, SERIAL_8N1, PMS_RX, PMS_TX);
}

void loop() {

  Serial.println("================================");

  // ----- Read DHT11 -----
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("DHT11 Read Failed!");
    delay(1000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  // ----- Read MQ135 -----
  int gasValue = analogRead(MQ135_PIN);
  Serial.print("MQ135 Analog: ");
  Serial.println(gasValue);

  // ----- Read PMS7003 -----
  uint16_t pm25 = 0;
  uint16_t pm10 = 0;

  while (pmsSerial.available()) {

    if (pmsSerial.read() == 0x42) {
      if (pmsSerial.peek() == 0x4D) {

        pmsSerial.read(); // consume 0x4D
        pmsSerial.readBytes(buffer, 30);

        pm25 = (buffer[6] << 8) | buffer[7];
        pm10 = (buffer[8] << 8) | buffer[9];

        break;
      }
    }
  }

  Serial.print("PM2.5: ");
  Serial.println(pm25);

  Serial.print("PM10: ");
  Serial.println(pm10);

  // =============================
  // ===== XGBoost Prediction ====
  // =============================

  float features[4] = {
    (float)pm25,
    (float)pm10,
    temperature,
    humidity
  };

  float outputs[6];   // 6 AQI classes

  score(features, outputs);

  // ----- Find max score -----
  int predictedClass = 0;
  float maxScore = outputs[0];

  for (int i = 1; i < 6; i++) {
    if (outputs[i] > maxScore) {
      maxScore = outputs[i];
      predictedClass = i;
    }
  }

  Serial.print("Predicted Class Index: ");
  Serial.println(predictedClass);

  // ----- Map to AQI Label -----
  String aqiLabel;

  switch(predictedClass) {
    case 0: aqiLabel = "Good"; break;
    case 1: aqiLabel = "Satisfactory"; break;
    case 2: aqiLabel = "Moderate"; break;
    case 3: aqiLabel = "Poor"; break;
    case 4: aqiLabel = "Very Poor"; break;
    case 5: aqiLabel = "Severe"; break;
    default: aqiLabel = "Unknown"; break;
  }

  Serial.print("AQI Category: ");
  Serial.println(aqiLabel);

  delay(2000);
}
