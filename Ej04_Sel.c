/*
 Programa: Ej04_Sel.c
 Descripción: Ingresar un número e informar si es múltiplo de 7.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    if (numero%7==0)
    {
        printf("El numero ingresado es multiplo de 7\n");
    }
    else
    {
        printf("El numero ingresado NO es multiplo de 7\n");
    }    
    return 0;
}