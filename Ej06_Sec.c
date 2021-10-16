/*
 Programa: Ej06_Sec.c
 Descripción: Ingresar dos valores numéricos que corresponden a un horario expresados horas y
 minutos, convertirlo a minutos. Mostrar el resultado.
 Autor: Gustavo Barrajón
 Modificó:
*/

#include<stdio.h>

int main()
{
    int horas, minutos, totalMin;
    printf("Ingrese las horas: ");
    scanf("%d", &horas);
    printf("Ingrese los minutos: ");
    scanf("%d", &minutos);
    totalMin=(horas*60)+minutos;
    printf("El total de minutos es: %d\n", totalMin);
    return 0;
}