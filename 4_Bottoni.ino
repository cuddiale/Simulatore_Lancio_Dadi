#include <Adafruit_LiquidCrystal.h>

// Inizializza l'oggetto LCD con gli indirizzi dei pin (in questo caso 0, ma di solito sono altri)
Adafruit_LiquidCrystal lcd(0);

// inserire variabili 
// .
// .
// .
// .

// funzione reset per tornare allo stato iniziale
void resetStato() {

  Contatore = 0; // Azzera il contatore
  lcd.clear();   // Pulisce il display
  lcd.print("cambiare testo"); // Scrive il messaggio iniziale
  
}

void setup() {
  // Inizializza il display LCD con 16 colonne e 2 righe
  lcd.begin(16, 2);
  
  // Imposta i pin dei bottoni come INPUT
  pinMode(------------, ------------);
  resetStato();
  delay(1000);
}


void loop() {


}






















































