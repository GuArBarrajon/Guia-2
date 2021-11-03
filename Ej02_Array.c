/*
Programa: Ej02_Array.c
Descripción: Ingresar un vector de 10 números e informar el número máximo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<limits.h>
#define MAX 10

int main()
{
    int vector[MAX], i, mayor= INT_MIN;

    for(i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf(" %d", &vector[i]);
        if (vector[i]>mayor)
            mayor=vector[i];
    }
    
    printf("El mayor de los numeros ingresados es: %d", mayor);
    return 0;
}