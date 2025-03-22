const int TRIG_PIN = 6;   // Trigger pin of HC-SR04
const int ECHO_PIN = 5;   // Echo pin of HC-SR04
const int BUZZER_PIN = 3; // Buzzer pin

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600); // Initialize serial monitor
}

void loop() {
  long duration;
  int distance;
 
  // Send a short pulse to trigger the sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the echo response
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2; // Convert time to distance in cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 10) { // If object is within 10 cm
    tone(BUZZER_PIN, 1000); // Beep at 1kHz
  } else {
    noTone(BUZZER_PIN); // Stop buzzing
  }

  delay(500); // Small delay before next measurement
}
