/*
Programa: Ej02_Fun.c
Descripción: Realizar una función que lo clasifique en isósceles, equilátero o escaleno.
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

    if(triangulo (a, b, c)==0)
    printf("El triangulo es EQUILATERO");
    else if (triangulo (a, b, c)==1)
    printf("El triangulo es ISOSCELES");      // para hacerlo lo más compacto posible
    else 
    printf("El triangulo es ESCALENO");

}

int ingreso()
{
    int lado;
    printf("Ingrese el valor de uno de los lados: ");
    scanf("%d", &lado);
    return lado;
}

int triangulo (int lado1, int lado2, int lado3)
{
    if(lado1==lado2 && lado1==lado3)
    return 0;
    else if (lado1==lado2 && lado2!=lado3 || lado1==lado3 && lado1!=lado2 || lado2==lado3 && lado1!=lado3)
    return 1;
    else
    return 2;
}