#include "shieldSetup.h"
#include "data.h"
#include <FastLED.h>

#define WINNING_SCORE 5
CRGB leds[NUM_LEDS];
int randomInt, score, b1, b2, rightAnswer, givenAnswer;
bool waitingForInput;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, RGB>(leds, NUM_LEDS);
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  waitingForInput = 0;
  score = 0;
  Serial.begin(9600);
  Serial.println();
  Serial.println();
}

void loop() { 
  if(!waitingForInput) {
    randomInt = random(NUM_OF_QUESTIONS);
    Serial.println(questions[randomInt]);
    rightAnswer = answers[randomInt];
  }
  
  waitingForInput = 1;
  b1 = !digitalRead(BUTTON1);
  b2 = !digitalRead(BUTTON2);
  delay(50);
  
  if(b1 && b2) {
    if(randomInt == 8) {
      score++;
      givenAnswer = 2;
      waitingForInput = 0;
    } else {
      Serial.println("Ci hai provato! Premi un solo tasto alla volta.");
    }
  } else if(b1) {
    Serial.print("Hai scelto 'Vero'. ");
    givenAnswer = 1;
    waitingForInput = 0;
  } else if(b2) {
    Serial.print("Hai scelto 'Falso'. ");
    givenAnswer = 0;
    waitingForInput = 0;
  }

  if(!waitingForInput) {  
    if(givenAnswer == rightAnswer) {
      score++;
      if(score >= WINNING_SCORE) {
        Serial.println("HAI VINTO!");
        Serial.println();
        Serial.println("===================================================");
        Serial.println();
        playMusic(valchirie,NOTE_VALCHIRIE,CRGB(50,50,0));
        score = 0;
      } else if(randomInt == 8) {
        Serial.println("Pensavo di fregarti! Guadagni 2 punti!");
        playMusic(empire,NOTE_EMPIRE,CRGB(50,0,50));
        printScore();
      } else {
        Serial.println("Risposta esatta!");
        playMusic(vivaldi,NOTE_VIVALDI,CRGB(0,50,0));
        printScore();
      }
    } else {
      Serial.println("Risposta errata!");
      playMusic(chopin,NOTE_CHOPIN,CRGB(50,0,0));
      printScore();
    }
  } 
  delay(500);
}

void playMusic(float song[][2], int notes, CRGB color) {
  bool selectLed = 0;
  for(int i=0; i<notes; i++) {
    
    tone(BUZZER, song[i][0]);
    leds[selectLed] = color;
    FastLED.show();
    delay(song[i][1]*500);
    
    noTone(BUZZER);
    leds[selectLed] = CRGB(0,0,0);
    FastLED.show();
    
    selectLed = !selectLed;
    delay(30);
  }
}

void printScore() {
  Serial.print("Hai ");
  Serial.print(score);
  Serial.print(" punt");
  if(score == 1) {
    Serial.println("o.");
  } else {
    Serial.println("i.");
  }
  Serial.println();
}
