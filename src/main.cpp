#include <Arduino.h>
int sw1 = 15;
#define ledg1 23
#define ledy1 19
#define ledr1 18
#define ledg2 5
#define ledy2 17
#define ledr2 16
int buttonState = 0;
int k = 0;

void setup()
{
  pinMode(sw1, INPUT_PULLUP);
  pinMode(ledg1, OUTPUT);
  pinMode(ledy1, OUTPUT);
  pinMode(ledr1, OUTPUT);
  pinMode(ledr2, OUTPUT);
  pinMode(ledy2, OUTPUT);
  pinMode(ledg2, OUTPUT);

  digitalWrite(ledy1, LOW);
  digitalWrite(ledr1, LOW);
  digitalWrite(ledg1, LOW);
  digitalWrite(ledy2, LOW);
  digitalWrite(ledr2, LOW);
  digitalWrite(ledg2, LOW);
}

void loop()
{

  while (k == 1)
  {
    digitalWrite(ledy1, HIGH);
    digitalWrite(ledr1, HIGH);
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledy2, HIGH);
    digitalWrite(ledr2, HIGH);
    digitalWrite(ledg2, HIGH);
    delay(1000);
    digitalWrite(ledy1, LOW);
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, LOW);
    digitalWrite(ledy2, LOW);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, LOW);
    delay(1000);
    while (digitalRead(sw1) == HIGH)
      k = 0;
  }

  while (k == 0)
  {
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledr2, HIGH);
    delay(1000);
    digitalWrite(ledg1, LOW);
    digitalWrite(ledy1, HIGH);
    delay(1000);
    digitalWrite(ledr2, LOW);
    digitalWrite(ledg2, HIGH);
    digitalWrite(ledy1, LOW);
    digitalWrite(ledr1, HIGH);
    delay(1000);
    digitalWrite(ledg2, LOW);
    digitalWrite(ledy2, HIGH);
    delay(1000);
    digitalWrite(ledr1, LOW);
    digitalWrite(ledg1, HIGH);
    digitalWrite(ledy2, LOW);
    digitalWrite(ledr2, HIGH);
    delay(1000);
    while (digitalRead(sw1) == HIGH)
      k = 1;
  }
}