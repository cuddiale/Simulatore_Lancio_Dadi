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

//mettere un ciclo infinito così che non esca se non vengono premuti i tasti.

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("numero dadi");
 lcd.setCursor(0,1);
 lcd.print(numero);
 }


// considerare che in base al numero di daccie da inserire sarà la simulazione 
//  continuare con tutti i condizionali finchè non può piu il codice entrare nel loop 


//si può prendere un input in arduino??

int numero = random(1, 7); // generare numero random compreso fra tra 1 e 6, creare int numero = random(1, numero_selezionato)


 else if (condition)
 {
   /* code */
 }
 

 else
 {
    /* code */
 }
 
//se nessun tasto è premuto continmuerà il loop infinito.

}


