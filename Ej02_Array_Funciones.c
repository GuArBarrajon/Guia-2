/*
Programa: Ej02_Array.c
Descripción: Ingresar un vector de 10 números e informar el número máximo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<limits.h>
#define MAX 10

int carga(int v[]);
int numMayor(int v[]);

void main()
{
    int vector[MAX];
    carga(vector);
        
    printf("El mayor de los numeros ingresados es: %d", numMayor(vector));
}

int carga(int v[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf(" %d", &v[i]);
    }
}

int numMayor(int v[])
{
    int mayor=INT_MIN;
    for(int i=0; i<MAX; i++)
    {
    if (v[i]>mayor)
        mayor=v[i];
    }
    return mayor;
}