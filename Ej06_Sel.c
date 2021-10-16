/*
 Programa: Ej06_Sel.c
 Descripción: Ingresar 4 números enteros e imprima el Menor de todos.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, menor;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);
    menor=num1;
    if (menor>num2)
    {
        menor=num2;
    }
    if (menor>num3)
    {
        menor=num3;
    }    
    if (menor>num4)
    {
        menor=num4;
    }
    printf("El numero menor es: %d\n", menor);
    return 0;
}