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

if (digitalRead(su) == LOW && digitalRead(giu) == LOW && digitalRead(annulla) == LOW && digitalRead(conferma) == LOW)
{

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Press any button");
  
//mettere una condizione di pausa altrimenti ripete infinito
// come impostare la variabile
  
 }


// generare numero random ===> int numero = random(1, variabile)


 else if (digitalRead(su) == HIGH or digitalRead(giu) == HIGH or digitalRead(annulla) == HIGH or digitalRead(conferma) == HIGH)
 {

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("select number");
 lcd.setCursor(0,1);
 lcd.print(numero);
 delay(10000);
  
 }
 
}


