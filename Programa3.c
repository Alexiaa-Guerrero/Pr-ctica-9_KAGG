/*Karla Alexia Guerrero González
Práctica 9 11/10/24
Programa 3 correspondiente a la práctica*/


#include <stdio.h>
int main ()
{
 char *ap, c = 'a'; 
 ap = &c; 
 printf("Carácter: %c\n",*ap); 
 printf("Código ASCII: %d\n",*ap); 
 printf("Dirección de memoria: %d\n",ap);
 return 0;
}
