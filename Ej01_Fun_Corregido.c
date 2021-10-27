/*
Programa: Ej01_Fun.c
Descripción: Realizar un programa que lea los lados a,b,c de un triangulo y Realizar una función que
informe si conforman triangulo.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>

int triangulo (int lado1, int lado2, int lado3);
int ingreso();

void main (void)
{
    int a, b, c;
    a=ingreso();
    b=ingreso();
    c=ingreso();
    if(triangulo (a, b, c)!=0)
    {
        printf("Es un triangulo\n");
    }
    else
    {
        printf("NO es un triangulo\n");
    }
}

int ingreso()  // funcion para la carga de datos
{
    int x;
    printf("Ingrese el valor de uno de los lados: ");
    scanf("%d", &x);
    return x;
}

int triangulo (int lado1, int lado2, int lado3)
{
    return (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2); //me devuelve el valor de las condiciones sin necesidad de hacer if 
}
