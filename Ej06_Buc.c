/*
Programa: Ej06_Buc.c
Descripción: Calcular el Factorial de un número leído por teclado e informar si es primo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


int main()
{
    int numero, factor, contador;
    factor=0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    for(contador=1; contador<=numero;contador++)
    {
      if(numero%contador==0)
      {
          factor++;
      }  
    }
    if(factor==2)
    {
        printf("El numero %d es un numero PRIMO\n", numero);
    }
    else
    {
        printf("El numero %d NO es un numero primo\n", numero);
    }
    return 0;
}