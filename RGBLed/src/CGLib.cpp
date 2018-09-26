#include "CGLib.h"
//Pins:
int HindernisPruefer = 2;
int trigger = 3;
int echo = 4;
//Variablen:
int Abstand;

bool HindernisPruefen(){
	bool Hindernis;
	Abstand = digitalRead(HindernisPruefer);
	if(Abstand == HIGH){
		Hindernis = true;
	}
	else{
		Hindernis = false;
	}
	return Hindernis;
}

int EntfernungMessen()
{
  long entfernung=0;
  long zeit=0;

  digitalWrite(trigger, LOW);
  delayMicroseconds(3);
  noInterrupts();
  digitalWrite(trigger, HIGH); //Trigger Impuls 10 us
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  zeit = pulseIn(echo, HIGH); // Echo-Zeit messen
  interrupts();
  zeit = (zeit/2); // Zeit halbieren
  entfernung = zeit / 29.1; // Zeit in Zentimeter umrechnen
  return(entfernung);
}