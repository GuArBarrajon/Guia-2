/*
Programa: Ej07_Buc.c
Descripción: Escribir un Programa q obtenga la Media de las Notas obtenidas por un alumno. Se
pueden introducir hasta 4 notas entre 0 y 100 y luego imprimir por teclado la Media y la
Categoría.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>


int main()
{
    int nota, suma, contador;
    float promedio;
    suma=0;
    for(contador=0; contador<4; contador++)
    {
        printf("Ingrese la nota: ");
        scanf("%d", &nota);
        suma=suma+nota;
    }
    promedio=suma/4;
    if(promedio>=90)
    {
        printf("El puntaje medio del alumno es %0.2f y la catedoria es A", promedio);
    }
    else
    {
        if (promedio<=89 && promedio>=80)
        {
            printf("El puntaje medio del alumno es %0.2f y la catedoria es B", promedio);
        }
        else
        {
            if(promedio<=79 && promedio>=70)
            {
                printf("El puntaje medio del alumno es %0.2f y la catedoria es C", promedio);
            }
            else
            {
                if(promedio<=69 && promedio>=60)
                {
                    printf("El puntaje medio del alumno es %0.2f y la catedoria es D", promedio);
                }
                else
                {
                    printf("El puntaje medio del alumno es %0.2f y la catedoria es E", promedio);
                }
            }
            
        }
        
    }
    
    return 0;
}