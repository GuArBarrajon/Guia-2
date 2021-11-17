/*
Programa: Ej04_Array.c
Descripción: Calcular las estadísticas de un conjunto de N Elementos de un Vector (media, varianza,
desvío y frecuencia de los elementos) e informarla por pantalla.
Autor: Gustavo Barrajón
Modificó:
*/

#include <stdio.h>
#include<math.h>
#define MAX 5

float cargar(float c[]); 
float media(float c[]);
float varianza(float c[], float p);
float desvio(float v);

void main()
{
    float conjunto[MAX], med, varianz, desv;
    cargar(conjunto);
    printf("La media de los datos ingresados es: %0.2f\n", med=media(conjunto));
    printf("La varianza de los datos ingresados es: %0.2f\n", varianz=varianza(conjunto, med));
    printf("El desvio de los datos ingresados es: %0.2f\n", desv=desvio(varianz));
}

float cargar( float c[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero ");
        scanf(" %f", &c[i]);
    }
}

float media(float c[])
{
    float suma=0;
    for (int i = 0; i < MAX; i++)
    {
        suma=suma+c[i];
    }
    return suma/MAX;
}

float varianza(float c[], float p)
{
    float var, suma=0;
    for (int i = 0; i < MAX; i++)
    {
        var=(c[i]-p)*(c[i]-p);
        suma=suma+var;
    }
    return suma/MAX;
}

float desvio(float v)
{
    return sqrt(v);
}
