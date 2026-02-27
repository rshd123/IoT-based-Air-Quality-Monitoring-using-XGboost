// ================= DHT11 =================
// VCC → 3.3V
// DATA → D4
// GND → GND
#define DHTPIN 4
#define DHTTYPE DHT11
#include <WiFi.h>
#include <DHT.h>
const char* ssid = "Airtel_mush_1896";
const char* password = "CfarithaC@1";
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Start DHT sensor
  dht.begin();
  Serial.println("DHT11 test starting...");

  // Connect WiFi
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C  |  Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(2000);
}

