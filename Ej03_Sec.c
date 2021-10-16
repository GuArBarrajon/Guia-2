/*
 Programa: Ej03_Sec.c
 Descripción: Dado el radio de una circunferencia informar su perímetro y superficie.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    float radio;
    float perimetro;
    float superficie;
    float pi=3.14159265359;
    printf("Ingrese el radio de la circunferencia ");
    scanf("%f", &radio);
    perimetro=2*pi*radio;
    superficie=pi*radio*radio;
    printf("El perimetro de la circunferencia es %f\n", perimetro);
    printf("La superficie de la circunferencia es %f\n", superficie);
    return 0;
}