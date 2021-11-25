 const int ledPin = 2;// the pin that the LED
const int ledPin2 = 6;
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
    if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    }
    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'A') {
      digitalWrite(ledPin2, LOW);
    }
    if (incomingByte == 'B') {
      digitalWrite(ledPin2, HIGH);
    }

  }
}
