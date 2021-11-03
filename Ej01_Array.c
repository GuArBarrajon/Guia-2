/*
Programa: Ej01_Array.c
Descripción: Ingresar un vector de 10 números e informar el promedio.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 10

int main()
{
    float vector[MAX], suma=0, promedio;

    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf(" %f", &vector[i]);
        suma=suma+vector[i];
    }
    promedio=suma/MAX;
    printf("El promedio de los numeros ingresados es: %f", promedio);
    return 0;
}