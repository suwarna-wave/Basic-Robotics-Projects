#define TRIG_PIN 2  // Define the trigger pin for the ultrasonic sensor
#define ECHO_PIN 3  // Define the echo pin for the ultrasonic sensor
#define RELAY_PIN 4 // Define the relay control pin

#define MAX_DISTANCE 20  // Maximum distance to trigger the sanitizer dispenser (in cm)

unsigned long previousMillis = 0; // Stores the time since the last dispenser activation
const long interval = 5000;       // Interval between each dispenser activation (in milliseconds)

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Initially turn off the relay
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // It's time to check the distance and trigger dispenser
    previousMillis = currentMillis;
    unsigned int distance = measureDistance();
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance <= MAX_DISTANCE) {
      activateDispenser();
    }
  }
}

unsigned int measureDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  unsigned long duration = pulseIn(ECHO_PIN, HIGH);
  unsigned int distance = duration * 0.034 / 2; // Calculate distance in cm
  return distance;
}

void activateDispenser() {
  Serial.println("Dispensing sanitizer...");
  digitalWrite(RELAY_PIN, HIGH); // Turn on the relay to activate the pump
  delay(1000); // Run the pump for 1 second
  digitalWrite(RELAY_PIN
, LOW); // Turn off the relay
}