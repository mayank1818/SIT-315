// To define pin assignments
int led = 13;
int motionSensor = 4;

void setup() {
  // To initialize serial communication for debugging
  Serial.begin(9600);

  // To set pin modes for motion sensor input and LED output
  pinMode(motionSensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // To read the digital input from the motion sensor
  int value = digitalRead(motionSensor);
  
  // To check if motion is detected
  if (value == HIGH) {
    // To turn on the LED and print a message to the Serial Monitor
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected: " + String(value));
  } else {
    // To turn off the LED and print a message to the Serial Monitor
    digitalWrite(led, LOW);
    Serial.println("NO MOTION");
  }
  
  // To introduce a delay before the next iteration
  delay(2000);
}
