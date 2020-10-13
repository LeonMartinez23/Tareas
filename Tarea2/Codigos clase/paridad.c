//Comparador de numeros pares y impares
#include <cs50.h> //Se incluyo la libreria cs50
#include <stdio.h>
int main(void){

	int n = get_int("Escribe un numero: ");//Introduce el numero a comparar

	if (n % 2 ==1) //Compara el numero introducido
	{
		printf("Impar\n");//Imprime en patantalla si fue impar
	}else {
		printf("Par\n");//Imprime en patantalla si fue par
	}


}