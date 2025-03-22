#include <Arduino.h>
#include <DHT.h>

// Define the pins for the DHT sensor, LEDs, ultrasonic sensor, and buzzer
#define DHTPIN 2      // DHT sensor pin
#define DHTTYPE DHT11 // DHT 11
#define RED_LED_PIN 3
#define GREEN_LED_PIN 4
#define TRIG_PIN 5   // Ultrasonic sensor trigger pin
#define ECHO_PIN 6   // Ultrasonic sensor echo pin
#define BUZZER_PIN 7 // Buzzer pin

// Initialize the DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// Function declarations
int myFunction(int, int);
long readUltrasonicDistance(int triggerPin, int echoPin);

void setup()
{
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the DHT sensor
  dht.begin();

  // Initialize the LED pins as outputs
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);

  // Initialize the ultrasonic sensor pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Initialize the buzzer pin as output
  pinMode(BUZZER_PIN, OUTPUT);

  // Example function call
  int result = myFunction(2, 3);
}

void loop()
{
  // Read temperature and humidity
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature))
  {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print the temperature and humidity to the Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");

  // Control the LEDs based on temperature and humidity
  if (humidity > 60)
  {
    digitalWrite(RED_LED_PIN, HIGH); // Turn on red LED
  }
  else
  {
    digitalWrite(RED_LED_PIN, LOW); // Turn off red LED
  }

  if (temperature > 25)
  {
    digitalWrite(GREEN_LED_PIN, HIGH); // Turn on green LED
  }
  else
  {
    digitalWrite(GREEN_LED_PIN, LOW); // Turn off green LED
  }

  // Read distance from ultrasonic sensor
  long distance = readUltrasonicDistance(TRIG_PIN, ECHO_PIN);

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Control the buzzer based on distance
  if (distance < 10)
  {                                 // Threshold distance in cm
    digitalWrite(BUZZER_PIN, HIGH); // Turn on buzzer
  }
  else
  {
    digitalWrite(BUZZER_PIN, LOW); // Turn off buzzer
  }

  // Wait a few seconds between measurements
  delay(2000);
}

// Function definitions
int myFunction(int x, int y)
{
  return x + y;
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  // Send a 10us pulse to trigger the ultrasonic sensor
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Read the echo pin and calculate the distance
  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}