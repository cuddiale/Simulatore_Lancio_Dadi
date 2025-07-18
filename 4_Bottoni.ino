#include <Adafruit_LiquidCrystal.h>

// Inizializza l'oggetto LCD con gli indirizzi dei pin (in questo caso 0, ma di solito sono altri)
Adafruit_LiquidCrystal lcd(0);

#define su 2
#define giu 3
#define annulla 4
#define conferma 5

int numero = 0;

void setup() {
 
 pinMode(su, INPUT);
 pinMode(giu, INPUT); 
 pinMode(annulla, INPUT); 
 pinMode(conferma, INPUT); 
 
 lcd.begin(16, 2);
 lcd.clear();
 lcd.print("Welcome");
 delay(3000);

}


void loop() {

//  lcd.clear();
//  lcd.setCursor(0,0);
//  lcd.print("numero dadi");
//  lcd.setCursor(0,1);
//  lcd.print(numero);

// creare codice attivando i bottoni 

// inziziare, se nessun bottone è premuto allora lcd.print selettore numero da lanciare

}


