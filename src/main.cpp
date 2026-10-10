#include <Arduino.h>
#include <EasyKids3in1.h>git remote add origin git@github.com:Tritonsspace/Test3in1.git
#define Green D0
#define Yellow D1
#define Red D2
void setup() {
  EasyKids_Setup();
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
  waitForStart();
  beep();
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Green, HIGH);  // turn the LED on (HIGH is the voltage level)                     // wait for a second
  digitalWrite(Green, LOW);   // turn the LED off by making the voltage LOW                  // wait for a second
  digitalWrite(Yellow, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(Yellow, LOW);   // turn the LED off by making the voltage LOW           // wait for a second
  digitalWrite(Red, HIGH);  // turn the LED on (HIGH is the voltage level)               // wait for a second
  digitalWrite(Red, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
}
