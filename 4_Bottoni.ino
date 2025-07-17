#include <Adafruit_LiquidCrystal.h>

// Inizializza l'oggetto LCD con gli indirizzi dei pin (in questo caso 0, ma di solito sono altri)
Adafruit_LiquidCrystal lcd(0);

// Definizione dei pin digitali a cui sono collegati i bottoni
int Su = 3;        // Bottone per incrementare il valore
int Giu = 2;       // Bottone per decrementare il valore
int Conferma = 5;  // Bottone per confermare una selezione
int Annulla = 4;   // Bottone per annullare un'operazione
int Contatore = 0; // Variabile per tenere traccia di un conteggio

void resetStato() {
  // Funzione per "resettare" lo stato del tuo programma
  Contatore = 0; // Azzera il contatore
  lcd.clear();   // Pulisce il display
  lcd.setCursor(0, 0); // Sposta il cursore all'inizio
  Serial.println("Stato resettato!");
  lcd.print("cambiare testo"); // Scrive il messaggio iniziale
}

void setup() {
  // Inizializza il display LCD con 16 colonne e 2 righe
  lcd.begin(16, 2);
  
  // Imposta i pin dei bottoni come INPUT
  pinMode(Su, INPUT);
  pinMode(Giu, INPUT);
  pinMode(Conferma, INPUT);
  pinMode(Annulla, INPUT);
  resetStato();
  delay(1000);
}

void loop() {

  
  //fare in modo che con if o altri cicli, nel momento in cui premo "annulla" richiamo la funzione reset.



}