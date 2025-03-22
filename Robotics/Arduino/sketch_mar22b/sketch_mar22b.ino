// Define the pins
const int touchSensorPin = 2;  // Pin connected to the touch sensor output
const int buzzerPin = 3;       // Pin connected to the buzzer's I/O pin

void setup() {
  // Initialize the touch sensor pin as an input
  pinMode(touchSensorPin, INPUT);
  
  // Initialize the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
  
  // Start serial communication for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the state of the touch sensor
  int touchState = digitalRead(touchSensorPin);
  
  // Check if the touch sensor is touched
  if (touchState == HIGH) {
    // If touched, generate a tone at 2000 Hz (adjust frequency as needed)
    tone(buzzerPin, 2000);  // Generate a 2 kHz tone
    Serial.println("Touch detected! Buzzer is ON.");
  } else {
    // If not touched, stop the tone
    noTone(buzzerPin);      // Stop the buzzer
    Serial.println("No touch detected. Buzzer is OFF.");
  }
  
  // Small delay to avoid rapid toggling
  delay(100);
}