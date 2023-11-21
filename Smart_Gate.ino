#include <Servo.h>

Servo gate1;  // Servo motor for gate 1
Servo gate2;  // Servo motor for gate 2
int openIRPin = 5;  // IR sensor to open the gate
int closeIRPin = 6;  // IR sensor to close the gate
boolean gateIsOpen = false;  // Track the gate state

void setup() {
  gate1.attach(10); // Attach gate1 servo to pin 5
  gate2.attach(9); // Attach gate2 servo to pin 6
  pinMode(openIRPin, INPUT);
  pinMode(closeIRPin, INPUT);
  openGates(); // Initially, open both gates
}

void loop() {
  int openIRStatus = digitalRead(openIRPin);
  int closeIRStatus = digitalRead(closeIRPin);

  // Check if the openIR sensor state changed
  if (openIRStatus && !gateIsOpen) {
    openGates();
  } else if (!openIRStatus && gateIsOpen) {
    closeGates();
  }
}

void openGates() {
  delay(3000);
  gate1.write(0);  // Open gate1
  gate2.write(0);  // Open gate2 in the opposite direction
  gateIsOpen = true;
}

void closeGates() {
  gate1.write(90);  // Close gate1
  gate2.write(90);  // Close gate2 in the opposite direction
  gateIsOpen = false;
}
