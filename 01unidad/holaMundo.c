/*

   Programa:   holamundo.c
   Autor:	     Aram Tafoya 
   Objetivo:   Solicita un nombre e imprimir en pantalla
   Compilar:   gcc -o holamundo holamundo.c
   Ejecutar:   ./holamundo

*/

#include<stdio.h>

main()
{
   char nombre[20];

   printf("%cComo se llama? ",168);
   scanf("%s", nombre);

   printf("%cHola  %s!\n", 173, nombre);

}
