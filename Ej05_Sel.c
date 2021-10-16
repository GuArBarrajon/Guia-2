/*
 Programa: Ej05_Sel.c
 Descripción: Ingresar 4 números enteros e imprima el Mayor de todos.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, mayor;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);
    mayor=num1;
    if (mayor<num2)
    {
        mayor=num2;
    }
    if (mayor<num3)
    {
        mayor=num3;
    }    
    if (mayor<num4)
    {
        mayor=num4;
    }
    printf("El numero mayor es: %d\n", mayor);
    return 0;
}