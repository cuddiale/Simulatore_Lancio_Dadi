#include <Adafruit_LiquidCrystal.h>

// Inizializza l'oggetto LCD con gli indirizzi dei pin (in questo caso 0, ma di solito sono altri)
Adafruit_LiquidCrystal lcd(0);

#define su 2
int giu = 3;
int annulla = 4;
int conferma = 5;

int numero = 0

void setup() {

 
 pinMode(2, INPUT); //bottone su
 pinMode(3, INPUT); //bottone giu
 pinMode(4, INPUT); //bottone annulla
 pinMode(5, INPUT); //bottone conferma
 lcd.begin(16, 2);
 lcd.clear();
 lcd.print("Welcome");
 delay(3000);

}


void loop() {

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("numero dadi");
 lcd.setCursor(0,1);
 lcd.print(numero)

}


