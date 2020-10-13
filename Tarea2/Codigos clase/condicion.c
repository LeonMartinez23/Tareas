//Compara dos numeros si uno es mayor que otro, menor o igual
#include <cs50.h> //Se incluyo la libreria cs50
#include <stdio.h>
int main(void){

	int x = get_int("x: ");//Introduce el valor de x
	int y = get_int("y: ");//Introduce el valor de y

	if (x < y) //compara "x" y "y"
	{
		printf("x es menor a y\n", );
	}else if (x > y)//compara "x" y "y"
	{
		printf("x es mayor a y\n");
	}
	else{
		printf("x es igual a y\n");
	}

}
