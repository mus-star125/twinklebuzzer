#include "arduino_secrets.h"

const int buzzerPin = 9;
const int buttonPin = 2;

//  frequencies (Hz)
const int C4 = 262;
const int D4 = 294;
const int E4 = 330;
const int F4 = 349;
const int G4 = 392;
const int A4 = 440;

// Melody (full Twinkle Twinkle)
int melody[] = {
  C4, C4, G4, G4, A4, A4, G4,
  F4, F4, E4, E4, D4, D4, C4,
  G4, G4, F4, F4, E4, E4, D4,
  G4, G4, F4, F4, E4, E4, D4,
  C4, C4, G4, G4, A4, A4, G4,
  F4, F4, E4, E4, D4, D4, C4
};

// Duration (ms)
int noteDuration = 400;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    playSong();
  }
}

void playSong() {
  int length = sizeof(melody) / sizeof(int);
  for (int i = 0; i < length; i++) {
    tone(buzzerPin, melody[i], noteDuration);
    delay(noteDuration);
    noTone(buzzerPin);
    delay(50); // gaps
  }
}