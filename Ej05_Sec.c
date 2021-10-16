/*
 Programa: Ej05_Sec.c
 Descripción: Ingresar tres números, informar su promedio.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    float promedio;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    promedio=(num1+num2+num3)/3;
    printf("El promedio de los numeros ingresados es: %f\n", promedio);
    return 0;
}