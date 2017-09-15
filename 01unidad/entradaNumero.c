/*
   Programa:   entradaNumero.c
   Autor:	     Aram Tafoya 
   Objetivo:   Solicitar un numero entero e imprimir en pantalla
   Compilar:   gcc -o entrada entradaNumero.c
   Ejecutar:   ./entrada
*/

#include<stdio.h>

main()
{
   int numero;

   printf("Escribe un numero ");
   scanf("%d", &numero);

   printf("El numero %d \n", numero);
}
