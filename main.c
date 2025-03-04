/*
Created by: Osamah
Created on: Feb 2025
RGB projrct on the breadBoard
*/

const int PIN_11 = 11;
const int PIN_12 = 12;
const int PIN_13 = 13;
int blinkTime = 1000;

void setup()
{
  pinMode (PIN_11, OUTPUT);
  pinMode (PIN_12, OUTPUT);
  pinMode(PIN_13, OUTPUT);
}

void loop()
{
  //turn on red only
  digitalWrite(PIN_13, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_11, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn on green only
  digitalWrite(PIN_13, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_11, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn on blue only
  digitalWrite(PIN_13, LOW);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_11, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn on red and green
  digitalWrite(PIN_13, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_11, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn on green and blue
  digitalWrite(PIN_13, LOW);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_11, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn on red and blue
  digitalWrite(PIN_13, HIGH);
  digitalWrite(PIN_12, LOW);
  digitalWrite(PIN_11, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  //turn all on
  digitalWrite(PIN_13, HIGH);
  digitalWrite(PIN_12, HIGH);
  digitalWrite(PIN_11, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
}
