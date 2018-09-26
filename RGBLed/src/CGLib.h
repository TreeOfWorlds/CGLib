#ifndef __CG_LIB__
#define __CG_LIB__

#include <Arduino.h>


	//Hindernis pruefen
	extern int HindernisPruefer;
	extern int Abstand;
	//Abstandssensor
	extern int trigger;
	extern int echo;

	//
	bool HindernisPruefen();
	//
	int EntfernungMessen();

  	

#endif