#include <Adafruit_LiquidCrystal.h> //includic libreria per il display LCD

Adafruit_LiquidCrystal lcd_1(0);

int PinButton = 2; //pin del pulsante

void setup()
{
 lcd_1.begin(16, 2);
 pinMode(PinButton,INPUT);
 lcd_1.setCursor(0, 0);
}

void loop()
{
   quando si accende il display voglio che mi  mostri "LANCIO DADI"
   lcd_1.print("LANCIO DADI");  
    delay(2000); //attendi 2 secondi
    lcd_1.clear(); //pulisci il display
    lcd_1.setCursor(0, 0); //posiziona il cursore alla prima riga
    
}