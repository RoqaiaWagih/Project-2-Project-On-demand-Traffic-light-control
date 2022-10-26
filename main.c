/*
 * GccApplication1.c
 *

 * Author: Eng. Roqaia
 */ 

//#include <avr/io.h>

#include "Application/application.h"


int main(void)
{
	//Initialize
	APP_init();
	
	//Main loop
	while(1){
		APP_start();
	}
}

