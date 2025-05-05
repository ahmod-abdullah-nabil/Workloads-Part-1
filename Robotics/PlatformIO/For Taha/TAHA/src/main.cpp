#include <Arduino.h>
#include <Servo.h>

// Pin definitions
const int trigPin = 2;       // Ultrasonic sensor trigger pin
const int echoPin = 3;       // Ultrasonic sensor echo pin
const int servoPin = 4;      // Servo motor control pin
const int laserPin = 5;      // Laser diode control pin
const int irReceiverPin = 6; // IR receiver pin
const int buzzerPin = 7;     // Buzzer pin

// System parameters
const int minDistance = 10;        // Minimum detection distance (cm)
const int maxDistance = 100;       // Maximum detection distance (cm)
const int scanAngleMin = 0;        // Minimum servo angle (degrees)
const int scanAngleMax = 180;      // Maximum servo angle (degrees)
const int scanSpeed = 1;           // Servo scanning speed (degrees per step)
const int detectionThreshold = 30; // Distance threshold for object detection (cm)
const int buzzDuration = 1000;     // Buzzer duration in milliseconds
const int laserDuration = 2000;    // Laser duration in milliseconds

Servo myServo;         // Servo object
int currentAngle = 0;  // Current servo angle
int scanDirection = 1; // 1 for increasing angle, -1 for decreasing
bool objectDetected = false;
unsigned long detectionTime = 0;
bool isScanning = true;

void setup()
{
  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(laserPin, OUTPUT);
  pinMode(irReceiverPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  // Ensure laser is initially OFF
  digitalWrite(laserPin, LOW);

  // Ensure buzzer is initially OFF
  digitalWrite(buzzerPin, LOW);

  // Attach servo
  myServo.attach(servoPin);

  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Move servo to initial position
  myServo.write(scanAngleMin);
  currentAngle = scanAngleMin;

  Serial.println("System initialized. Starting scan...");
}

void loop()
{
  if (isScanning)
  {
    // Normal scanning mode
    scanArea();

    // Check for objects
    float distance = getDistance();

    if (distance > minDistance && distance < detectionThreshold)
    {
      // Object detected within range
      Serial.print("Object detected at distance: ");
      Serial.print(distance);
      Serial.println(" cm");

      // Check if the object is friendly or enemy
      checkObject();
    }
  }
  else
  {
    // Currently engaging a target
    if (millis() - detectionTime > laserDuration)
    {
      // Engagement period over, return to scanning
      endEngagement();
    }
  }
}

void scanArea()
{
  // Move servo in scanning pattern
  currentAngle += scanDirection * scanSpeed;
  myServo.write(currentAngle);

  // Reverse direction at limits
  if (currentAngle >= scanAngleMax || currentAngle <= scanAngleMin)
  {
    scanDirection *= -1;
  }

  // Small delay for smooth movement
  delay(15);
}

float getDistance()
{
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo duration
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  float distance = duration * 0.034 / 2;

  return distance;
}

void checkObject()
{
  // Check if object has IR transmitter (friendly)
  bool isFriendly = checkIRSignal();

  if (!isFriendly)
  {
    // Enemy detected - engage
    engageTarget();
  }
  else
  {
    // Friendly detected - ignore and continue scanning
    Serial.println("Friendly target detected. Ignoring...");
    // Continue scanning - do nothing special
  }
}

bool checkIRSignal()
{
  // Read IR receiver to check for friendly signal
  // Assuming active LOW when signal is received
  int irValue = digitalRead(irReceiverPin);

  // For debugging
  Serial.print("IR Value: ");
  Serial.println(irValue);

  // Return true if friendly signal detected (adjust based on your IR receiver)
  return (irValue == LOW); // Change this based on your actual IR receiver behavior
}

void engageTarget()
{
  // Stop scanning
  isScanning = false;
  objectDetected = true;
  detectionTime = millis();

  // Activate laser - only now turn it ON
  digitalWrite(laserPin, HIGH);
  Serial.println("Laser activated!");

  // Activate buzzer
  digitalWrite(buzzerPin, HIGH);
  Serial.println("Buzzer activated!");

  Serial.println("Enemy target engaged!");
}

void endEngagement()
{
  // Deactivate laser and buzzer
  digitalWrite(laserPin, LOW);
  digitalWrite(buzzerPin, LOW);

  // Resume scanning
  isScanning = true;
  objectDetected = false;

  Serial.println("Engagement complete. Resuming scan.");
}