/*
 Programa: Ej02_Sel.c
 Descripción: Ingresar la base y altura de un triangulo y el diámetro de una circunferencia. informar
cual es el de mayor superficie.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>
#define Pi 3.14159265359

int main()
{
    float base, altura, diametro, supTriangulo, supCircun;
    printf("Ingrese la base del triangulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);
     printf("Ingrese el diametro de la circunferencia: ");
    scanf("%f", &diametro);
    supTriangulo=(base*altura)/2;
    supCircun=Pi*(diametro/2)*(diametro/2);
    if (supTriangulo>supCircun)
    {
        printf("El triangulo tiene mayor superficie\n");
    }
    else
    {
        if(supTriangulo<supCircun)
        {
            printf("La circunferencia tiene mayor superficie\n");
        }      
        else 
        {
            printf("La circunferencia y el triangulo tienen la misma superficie\n");
        }
    }    
    return 0;
}