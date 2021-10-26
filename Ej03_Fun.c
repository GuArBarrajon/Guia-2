
/*
Dado un triángulo rectángulo cuyos lados son: base=3, altura=4, hipot=5. Calcular
matemáticamente los ángulos con una o mas funciones.
Autor: Gustavo Barrajón
Modificó:
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159265359;

int angulosAgudos (float base, float altura, float hipotenusa);

void main (void)
{
    float a, b, c;
    printf("Ingrese la base del triangulo rectangolo: ");
    scanf("%f", &a);
    printf("Ingrese la altura del triangulo rectangulo: ");
    scanf("%f", &b);
    printf("Ingrese ingrese la hipotenusa del triangulo: ");
    scanf("%f", &c);
    angulosAgudos (a, b, c);
    
}

int angulosAgudos (float base, float altura, float hipotenusa)
{
    double angulo1, angulo2, arcoseno, seno;    

    seno=altura/hipotenusa;
    arcoseno= asin (seno);       // resultado en radianes
    angulo1= arcoseno*180/PI;    // conversión a grados
    angulo2=90-angulo1;    
    printf("Los angulos agudos del triangulo son %f y %f", angulo1, angulo2);
    return 0;
}