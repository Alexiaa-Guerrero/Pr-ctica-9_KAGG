/*Karla Alexia Guerrero González
Práctica 9 11/10/24
Programa 1c correspondiente a la práctica*/


#include <stdio.h>
int main ()
{

 int lista[5] = {10, 8, 5, 8, 7}; 
 int indice=0;
 printf("\tLista\n");
 
 for (indice = 0 ; indice < 5 ; indice++)
 {
 printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
 }

 printf("\n");
 return 0;
}
