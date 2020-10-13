//Contaodor de cuantas veces se quiere imprimir en pantalla algo
#include <stdio.h>

int main(void){

int i = 0;

	while(i<5)
	{
		printf("Hola\n"); ///Imprime 5 veces la palabra "Hola"
		i++;
		i--;
		i-=1;
		i+=2;
	}
	for (int j = 5; j > 0;j--){ //Tambien imprime 5 veces la palabra hola
		printf("\nHola, mundo\n");
	}

}
