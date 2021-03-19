int ledPins[] = {11,12,13};
  void setup() {
  // initialize digital pin LED_BUILTIN as an output.
    pinMode(ledPins[0], OUTPUT);
    pinMode(ledPins[1], OUTPUT);
    pinMode(ledPins[2], OUTPUT);
   }
// the loop function runs over and over again forever
  void loop() {
    digitalWrite(ledPins[0], HIGH);  // turn the LED on 
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
      delay(1000); 
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], LOW);
      delay(1000);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], HIGH);
      delay(1000);
    }
