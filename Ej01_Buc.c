/*
Programa: Ej01_Buc.c
Descripción: Ingresar 10 números e informar el promedio.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int main()
{
    int numero, i, suma;
    float promedio;
    suma=0;
    for (i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        suma=suma+numero;
    }
    promedio=(float)suma/10;
    printf("La suma de los numeros ingresados es %d y su promedio es %0.2f\n", suma, promedio);
    return 0;
}