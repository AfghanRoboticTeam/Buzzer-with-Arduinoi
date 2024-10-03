const int buzzerPin = 8;  // Pin where the buzzer is connected
const int switchPin = 7;  // Pin where the switch is connected
int switchState = 0;      // Variable to hold the switch state

void setup() {
  // Set pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  // Read the state of the switch
  switchState = digitalRead(switchPin);
  
  // If the switch is pressed
  if (switchState == HIGH) {
    digitalWrite(buzzerPin, HIGH);  // Turn the buzzer on
  } else {
    digitalWrite(buzzerPin, LOW);   // Turn the buzzer off
  }
}
