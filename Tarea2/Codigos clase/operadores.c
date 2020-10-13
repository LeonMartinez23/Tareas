//Te pregunta si estas de acuerdo o no
#include <cs50.h> //Se incluyo la libreria cs50
#include <stdio.h>
int main(void){

	char c = get_char("Estas de acuerdo?\n");//Pregunta al usuario si esta de acuerdo

	if (c == 'S' || c == 's')
	{
		printf("De acuerdo\n");
	}else if (c == 'N' || c == 'n')
	{
		printf("No de acuerdo\n");
	}

}