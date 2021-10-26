/*
Programa: Ej02_Fun.c
Descripción: Realizar una función que lo clasifique en isósceles, equilátero o escaleno.
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
    
    if(lado1==lado2 && lado1==lado3)
    {
            printf("El triangulo es EQUILATERO");
    }
    else
    {
        if (lado1==lado2 && lado2!=lado3 || lado1==lado3 && lado1!=lado2 || lado2==lado3 && lado1!=lado3)
        {
            printf("El triangulo es ISOSCELES");
        }
        else
        {
            printf("El triangulo es ESCALENO");
        }
    }
    return 0;
}