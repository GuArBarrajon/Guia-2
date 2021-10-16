/*
 Programa: Ej07_Sel.c
 Descripción: Ingresar 4 números enteros e imprimirlos de Menor a Mayor.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, aux;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);
    
    if (num1>num2)
    {
        aux=num1;
        num1=num2;
        num2=aux;
    }
    if (num1>num3)
    {
        aux=num1;
        num1=num3;
        num3=aux;
    }    
    if (num1>num4)
    {
        aux=num1;
        num1=num4;
        num4=aux;
    }
    if (num2>num3)
    {
        aux=num2;
        num2=num3;
        num3=aux;
    }
    if (num2>num4)
    {
        aux=num2;
        num2=num4;
        num4=aux;
    }    
    if (num3>num4)
    {
        aux=num3;
        num3=num4;
        num4=aux;
    }
    printf("Los numeros ingresados en orden ascendente son: %d, %d, %d, %d\n", num1, num2, num3, num4);
    return 0;
}