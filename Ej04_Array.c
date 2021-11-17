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

float estadisticas(float c[MAX]); 

void main()
{
    float conjunto[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero ");
        scanf(" %f", &conjunto[i]);
    }
    estadisticas(conjunto);
}

float estadisticas(float c[MAX])
{
    float suma = 0, promedio;
    int i;
    for (i = 0; i < MAX; i++)
    {
        suma = suma + c[i];
    }
    promedio = suma / MAX;
    printf("Media: %f\n", promedio);

    float var, varianza, suma2=0;
    for (i = 0; i < MAX; i++)
    {
        var=(c[i]-promedio)*(c[i]-promedio);
        suma2=suma2+var;
    }
    varianza=suma2/MAX;
    printf("Varianza: %f\n", varianza);

    double desvio= sqrt(varianza);
    printf("Desvio: %lf\n", desvio);
}