#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    float punto[3][3];  // Cambio aquí: 3x3 en lugar de 3x4

    for (int i = 0; i < 3; i++)
    {
        punto[i][0] = ingresarComponente('X', i);
        punto[i][1] = ingresarComponente('Y', i);
        punto[i][2] = ingresarComponente('Z', i);
    }

    imprimirMatriz(punto, 3);  // Cambio aquí: pasar 3 en lugar de 4
    imprimirPuntos(punto, 3);
    float volumen=calcularVolumen(punto);
    printf("El volumen del cono es: %.3f\n",volumen);
    return 0;
}
