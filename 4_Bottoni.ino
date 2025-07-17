#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

int Su = 3;
int Giu = 2;
int Conferma = 5;
int Annulla = 4;
int numeroDesiderato = 0;

void setup() {
    lcd.begin(16, 2);
    pinMode(Su, INPUT_PULLUP);
    pinMode(Giu, INPUT_PULLUP);
    pinMode(Conferma, INPUT_PULLUP);
    pinMode(Annulla, INPUT_PULLUP);

    lcd.print("Quanti numeri?");
    delay(1000);
}

void loop() {
    if (digitalRead(Su) == LOW) {
        numeroDesiderato++;
        lcd.clear();
        lcd.print("Numero: ");
        lcd.print(numeroDesiderato);
        delay(250);
    }

    if (digitalRead(Giu) == LOW && numeroDesiderato > 0) {
        numeroDesiderato--;
        lcd.clear();
        lcd.print("Numero: ");
        lcd.print(numeroDesiderato);
        delay(250);
    }

    if (digitalRead(Conferma) == LOW) {
        lcd.clear();
        lcd.print("Generando...");
        delay(500);
        randomSeed(analogRead(0));
        int numeroCasuale = random(0, numeroDesiderato + 1);
        lcd.clear();
        lcd.print("Risultato: ");
        lcd.print(numeroCasuale);
        delay(2000);
        lcd.clear();
        lcd.print("Quanti numeri?");
    }

    if (digitalRead(Annulla) == LOW) {
        numeroDesiderato = 0;
        lcd.clear();
        lcd.print("Quanti numeri?");
        delay(250);
    }
}
