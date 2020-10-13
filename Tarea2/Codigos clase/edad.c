//Convertidor de de tu edad en años a dias 

#include <cs50.h>
#include <stdio.h>
int main(void){

int age = get_int("What`s is your age?\n"); //Pregunta cual es tu edad
int days = age * 365; //Variable que multiplica tu edad por 365 dias
printf("1. You are at least %i days old.\n",days); //Imprime en pantalla tu edad en dias

printf("2. You are at least %i days old.\n",get_int("Cual es tu nombre?\n")*365); //Segunda forma si tener que declarar la variable "days"
}
