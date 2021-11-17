/*
Programa: Ej02_Matrices.c
Cargar una matriz de 2x5, ordenar los números de cada fila de menor a mayor y mostrar
el resultado.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#define FILA 2
#define COLUMNA 5
void cargarMatriz(int matriz[FILA][COLUMNA]);
void ordenarMatriz(int matriz[FILA][COLUMNA]);
void imprimirMatriz(int matriz[FILA][COLUMNA]);

void main()
{
    int numeros[FILA][COLUMNA];
    cargarMatriz(numeros);
    printf("Matriz desordenada:\n");
    imprimirMatriz(numeros);
    ordenarMatriz(numeros);
    printf("Matriz ordenada:\n");
    imprimirMatriz(numeros);
}

void cargarMatriz(int matriz[FILA][COLUMNA])
{
    for(int i=0; i<FILA; i++)          
    {                  
        for(int j=0; j<COLUMNA; j++)      
        {
            matriz[i][j]=0;
        }
    }
    for(int i=0; i<FILA; i++)          
    {                  
        for(int j=0; j<COLUMNA; j++)      
        {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void ordenarMatriz(int matriz[FILA][COLUMNA])
{
    int aux;
    for(int i=0; i<FILA; i++)          
    {                  
        for(int j=0; j<COLUMNA-1; j++)      
        {
            for(int a=j+1; a<COLUMNA; a++)
            {
                if(matriz[i][a]<matriz[i][j])
                {
                    aux=matriz[i][a];
                    matriz[i][a]=matriz[i][j];
                    matriz[i][j]=aux;
                }
            }
        }
    }
}

void imprimirMatriz(int matriz[FILA][COLUMNA])
{
    for(int i=0; i<FILA; i++)          
    {
        for(int j=0; j<COLUMNA; j++)      
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}