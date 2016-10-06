int buzzState = LOW;
unsigned long previousMillis = 0;
unsigned long interval = 1000;
const int buzzer = 9; //create a contstant that will be used to set pin for buzzer

void setup() {
  pinMode(buzzer, OUTPUT); // sets pin 9 as an input for buzzer
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;
    if (buzzState == HIGH) {
      buzzState = LOW;
      // generated a square wave, wave continues until noTone is called
      tone(buzzer, 3000);
    }
    else {
      buzzState = HIGH;
      noTone(buzzer); // Stop the generation of a square wave
    }
  }
}
