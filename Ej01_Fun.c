/*
Programa: Ej01_Fun.c
Descripción: Realizar un programa que lea los lados a,b,c de un triangulo y Realizar una función que
informe si conforman triangulo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int triangulo (int lado1, int lado2, int lado3);

void main (void)
{
    int a, b, c;
    printf("Ingrese el valor de uno de los lados: ");
    scanf("%d", &a);
    printf("Ingrese el valor de otro de los lados: ");
    scanf("%d", &b);
    printf("Ingrese el valor del ultimo de los lados: ");
    scanf("%d", &c);
    triangulo (a, b, c);
}

int triangulo (int lado1, int lado2, int lado3)
{
    if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2) 
    {
        printf("Es un triangulo\n");
    }
    else
    {
        printf("NO es un triangulo\n");
    }
    
    return 0;
}