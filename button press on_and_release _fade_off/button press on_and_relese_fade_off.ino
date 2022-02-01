const int buttonPin = 8;
const int led = 11;
int brightness = 255 ;
boolean pressed = false;


void setup () {
  pinMode (led, OUTPUT );
  pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
  if (digitalRead (buttonPin) == LOW) {
    digitalWrite(led, HIGH);
    brightness = 255;
    pressed = true;
  } else {
    if (pressed == true) {
      brightness = brightness - 5;
      delay(50);
      analogWrite(led, brightness );
      if (brightness < 0) {
        brightness = 0;
        digitalWrite(led, LOW);
        pressed = false;
      }
    }
  }
}
