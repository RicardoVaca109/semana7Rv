#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    float cono1[3][3];
    float cono2[3][3];  // Cambio aquí: 3x3 en lugar de 3x4

    for (int i = 0; i < 3; i++)
    {
        cono1[i][0] = ingresarComponente('X', i);
        cono1[i][1] = ingresarComponente('Y', i);
        cono1[i][2] = ingresarComponente('Z', i);
    }

    for (int i = 0; i < 3; i++)
    {
        cono2[i][0] = ingresarComponente('X', i);
        cono2[i][1] = ingresarComponente('Y', i);
        cono2[i][2] = ingresarComponente('Z', i);
    }
    float volumen1=calcularVolumen(cono1);
    printf("El volumen del primer cono es: %.3f\n",volumen1);
    float volumen2 = calcularVolumen(cono2);
    printf("El volumen del segundo cono es: %.3f\n",volumen2);
    float area1=calcularAreaSuperficial(cono1);
    printf("El area superficial del primer cono es: %.3f\n",area1);
    float area2=calcularAreaSuperficial(cono2);
    printf("El area superficial del primer cono es: %.3f\n",area2);
    imprimirVolumenArea(volumen1,volumen2,cono1,cono2);
    return 0;
}
