#include "pitches.h"
#define NUM_OF_QUESTIONS 24
#define MAX_LENGTH_OF_QUESTION 70

#define NOTE_VIVALDI 23
#define NOTE_CHOPIN 11
#define NOTE_VALCHIRIE 20
#define NOTE_EMPIRE 9

char questions[NUM_OF_QUESTIONS][MAX_LENGTH_OF_QUESTION] = {
  "Donald Trump è l'attuale presidente degli USA.",
  "Vienna è la capitale dell'Australia.",
  "Il creatore di questo programma è un'idiota.",
  "Il Molise esiste.",
  "Rhinoceros è un'IDE per lo sviluppo Web.",
  "Steve Jobs è stato fondatore di Apple.",
  "PHP è il miglior linguaggio per il backend.",
  "'Highway to Hell' è una canzone degli ACDC.",
  "Questa frase è falsa.",
  "La cavalletta ha 6 zampe.",
  "Il fiume Po attraversa il Lazio.",
  "L'ornitorinco depone le uova.",
  "La vongola, la lumaca e il polpo sono molluschi.",
  "Il brano per organo più lungo al mondo dura 639 minuti.",
  "Il frutto più costoso al mondo è il melone Yubari giapponese.",
  "Francesi e messicani hanno combattuto la guerra dei pasticcini.",
  "Il personaggio di Dory è presente nel cartone animato Doraemon.",
  "Prima di giocare nel Milan, Filippo Inzaghi militava nell'Inter.",
  "Il gallio è un metallo solido che si scioglie a 30 gradi circa.",
  "Nella pallavolo ci sono 8 posizioni.",
  "Le Maldive si trovano in Oceania.",
  "Munch è l'autore de 'l'Urlo'.",
  "La luce emessa dal Sole impiega 8 secondi per raggiungere la Terra.",
  "Il numero romano 'MCXIII' corrisponde al numero arabo 1513."
};

int answers[NUM_OF_QUESTIONS] = {
  0,0,1,1,0,1,0,1,2,1,0,1,1,0,1,1,0,0,1,0,0,1,0
};

float chopin[NOTE_CHOPIN][2] = {
  {NOTE_C4,2}, {NOTE_C4,1.5}, {NOTE_C4,0.5}, {NOTE_C4,2},
  {NOTE_DS4,1.5}, {NOTE_D4,0.5}, {NOTE_D4,1}, {NOTE_C4,01},
  {NOTE_C4,1}, {NOTE_B3,1}, {NOTE_C4,3},
};

float vivaldi[NOTE_VIVALDI][2] = {
  {NOTE_C5,0.5}, {NOTE_E5,0.5}, {NOTE_E5,0.5}, {NOTE_E5,0.5}, 
  {NOTE_D5,0.25}, {NOTE_C5,0.25}, {NOTE_G5,1.5}, {NOTE_G5,0.25},
  {NOTE_F5,0.25}, {NOTE_E5,0.5}, {NOTE_E5,0.5}, {NOTE_E5,0.5},
  {NOTE_D5,0.25}, {NOTE_C5,0.25}, {NOTE_G5,1.5}, {NOTE_G5,0.25},
  {NOTE_F5,0.25}, {NOTE_E5,0.5}, {NOTE_F5,0.25}, {NOTE_G5,0.25},
  {NOTE_F5,0.5}, {NOTE_E5,0.5}, {NOTE_D5,2}
};

float valchirie[NOTE_VALCHIRIE][2] = {
  {NOTE_B4,0.25}, {NOTE_FS4,0.25}, {NOTE_B4,0.25},
  {NOTE_D5,1}, {NOTE_B4,1}, {NOTE_D5,0.25}, {NOTE_B4,0.25},
  {NOTE_D5,0.25}, {NOTE_FS5,1}, {NOTE_D5,1}, {NOTE_FS5,0.25},
  {NOTE_D5,0.25}, {NOTE_FS5,0.25}, {NOTE_A5,1}, {NOTE_A4,1}, 
  {NOTE_D5,0.25}, {NOTE_A4,0.25}, {NOTE_D5,0.25}, {NOTE_FS5,2}
};

float empire[NOTE_EMPIRE][2] = {
  {NOTE_G5,1}, {NOTE_G5,1}, {NOTE_G5,1}, {NOTE_DS5,0.6}, {NOTE_AS5,0.25},
  {NOTE_G5,1}, {NOTE_DS5,0.6}, {NOTE_AS5,0.25}, {NOTE_G5,2}
};
