int ledPins[] = {1 , 2, 3, 4, 5 , 6 ,7};
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  for (int i = 1; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
    digitalWrite(ledPins[i], LOW);
  }
}
