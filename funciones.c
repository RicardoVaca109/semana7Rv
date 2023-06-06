#include <stdio.h>
#include <math.h>
#include "funciones.h"
float ingresarComponente(char comp, int i)
{
    float a;
    printf("Ingrese la componente %c del punto %d ", comp, i);
    scanf("%f", &a);
    return a;
}

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}
float calcularVolumen(float cono[3][3])
{
    float radio = calcularDistancias(cono[0][0], cono[0][1], cono[0][2],cono[1][0], cono[1][1], cono[1][2]);
    float altura = calcularDistancias(cono[0][0], cono[0][1], cono[0][2], cono[2][0], cono[2][1], cono[2][2]);
    return (3.14 * pow(radio, 2) * altura) / 3;
}
float calcularAreaSuperficial(float cono[3][3])
{
    float radio = calcularDistancias(cono[0][0], cono[0][1],cono[0][2],cono[1][0],cono[1][1],cono[1][2]);
    float generatriz = calcularDistancias(cono[1][0], cono[1][1],cono[1][2],cono[2][0],cono[2][1],cono[2][2]);

    float areaCono = 3.14*radio*generatriz;
    float areaBase = 3.14*pow(radio,2);
    return areaCono+areaBase;
}

float imprimirVolumenArea(float volumen1, float volumen2, float cono1[3][3], float cono2[3][3])
{   
     
    float radio1 = calcularDistancias(cono1[0][0], cono1[0][1],cono1[0][2],cono1[1][0],cono1[1][1],cono1[1][2]);
    float altura = calcularDistancias(cono2[0][0], cono2[0][1], cono2[0][2], cono2[2][0], cono2[2][1], cono2[2][2]);
    float alturanueva = altura/2;
    float radiopequeño = ((alturanueva * radio1)/altura);
    float volumenfinal = 2*((3.14 * pow(radiopequeño, 2) * alturanueva) / 3);
    printf("El volumen truncado es %.2f", volumenfinal);
    
}
