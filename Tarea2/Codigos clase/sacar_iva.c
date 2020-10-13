//con este programa se saca el IVA

#include <cs50.h> //Se incluyo la libreria cs50
#include <stdio.h>
int main(void){

	float price = get_float("What`s the price\n"); //Pregunta el precio al cual se le va sacar el IVA
	printf("Your total is %.2f.\n", price * 1.16);//Imprime en pantalla el IVA 
}
