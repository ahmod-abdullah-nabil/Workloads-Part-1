#include <DHT.h>

#define DHTPIN 2           // Pin where the DHT sensor is connected
#define DHTTYPE DHT11      // Define the type of DHT sensor (DHT11 or DHT22)
#define BUZZER_PIN 8       // Pin where the buzzer is connected

DHT dht(DHTPIN, DHTTYPE);  // Initialize the DHT sensor

void setup() {
  Serial.begin(9600);       // Start the serial communication
  dht.begin();              // Initialize the DHT sensor
  pinMode(BUZZER_PIN, OUTPUT);  // Set the buzzer pin as an output
}

void loop() {
  float humidity = dht.readHumidity();     // Read humidity
  float temperature = dht.readTemperature(); // Read temperature in Celsius

  // Check if reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print temperature and humidity values to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Trigger buzzer if temperature exceeds 30°C or humidity is below 30%
  if (temperature > 20.0 || humidity < 30.0) {
    digitalWrite(BUZZER_PIN, HIGH);  // Turn on the buzzer
    tone(BUZZER_PIN, 2000);
                   // Keep the buzzer on for 1 second
                      // Wait for a second before checking again
  }

  delay(2000); // Wait for 2 seconds before reading the sensor again
}
