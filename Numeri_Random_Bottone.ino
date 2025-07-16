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

 if(digitalRead(PinButton) == HIGH)
 {
   int numero = random(1, 7); //numero casuale tra 1 e 6
   lcd_1.clear();
   lcd_1.setCursor(4, 0);
   lcd_1.print("Numero ");
   lcd_1.setCursor(6, 1);
   lcd_1.print(numero);
   delay(3000); //attendi un secondo prima di cancellare il display
   lcd_1.clear();
 }
 else if(digitalRead(PinButton) == LOW)
 {
   lcd_1.setCursor(4, 0);
   lcd_1.print("Premi il");
   lcd_1.setCursor(4, 1);
   lcd_1.print("Pulsante");

 }
}