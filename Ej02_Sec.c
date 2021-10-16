 /*
 Programa: Ej02_Sec.c
 Descripción: Dadas la base y altura de un rectángulo imprimir su superficie.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int base;
    int altura;
    int superficie;
    printf("Ingrese la base del rectangulo ");
    scanf("%d", &base);
    printf("Ingrese la altura del rectangulo ");
    scanf("%d", &altura);
    superficie=base*altura;
    printf("La superficie del rectangulo es: %d\n", superficie);
    return 0;
}