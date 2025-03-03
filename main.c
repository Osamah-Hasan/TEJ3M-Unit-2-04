/*
Created by: Osamah
Created on: Feb 2025
RGB projrct on the breadBoard
*/
/*
Created by: Osamah
Created on: Feb 2025
RGB projrct on the breadBoard
*/

void setup()
{
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
