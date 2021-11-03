/*
Programa: Ej01_Array.c
Descripción: Ingresar un vector de 10 números e informar el promedio.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define MAX 10

float carga(float v[]);
float proMedio(float v[]);

void main()
{
    float vector[MAX];
    carga(vector);
        
    printf("El promedio de los numeros ingresados es: %0.2f", proMedio(vector));
}

float carga(float v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf(" %f", &v[i]);
    }
}

float proMedio(float v[])
{
    float suma, promedio;
    for(int i=0; i<MAX; i++)
    {
        suma=suma+v[i];
    }
    promedio=suma/MAX;
    return promedio;
}