#include <Adafruit_LiquidCrystal.h>

// Inizializza l'oggetto LCD con gli indirizzi dei pin (in questo caso 0, ma di solito sono altri)
Adafruit_LiquidCrystal lcd(0);

int su = 2;
int giu = 3;
int annulla = 4;
int conferma = 5;

void setup() {

 
 pinMode(2, INPUT); //bottone su
 pinMode(3, INPUT); //bottone giu
 pinMode(4, INPUT); //bottone annulla
 pinMode(5, INPUT); //bottone conferma
 lcd.begin(16, 2);
 lcd.clear();
 lcd.print("cambiare testo"); // Scrive il messaggio iniziale

}


void loop() {

if (digitalRead(conferma) == HIGH)
{
  lcd.clear();
  lcd.print("conferma");
}

else if (digitalRead(annulla) == HIGH;)
{
   lcd.clear();
   lcd.print("annulla");
}




}






















































