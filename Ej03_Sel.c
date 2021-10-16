/*
 Programa: Ej03_Sel.c
 Descripción: Ingresar un número y determinar si pertenece al intervalo -2 < x < 4.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    float numero;
    printf("Ingrese un numero: ");
    scanf("%f", &numero);
    if (numero>-2 && numero<4)
    {
        printf("El numero ingresado se encuentra entre -2 y 4\n");
    }
    else
    {
        printf("El numero ingresado NO se encuentra entre -2 y 4\n");
    }    
    return 0;
}