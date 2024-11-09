/*Karla Alexia Guerrero González
Práctica 9 11/10/24
Programa 7 correspondiente a la práctica*/


#include <stdio.h>
int main()
{
 char palabra[20];
 int i=0;
 printf("Ingrese una palabra: ");
 scanf("%s", palabra);
 printf("La palabra ingresada es: %s\n", palabra);
 for (i = 0 ; i < 20 ; i++)
 {
 printf("%c\n", palabra[i]);
 }
 return 0;
}
