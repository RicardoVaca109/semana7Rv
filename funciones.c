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
void imprimirMatriz(float punto[][3], int filas)
{
    printf("Matriz:\n");

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 3; j++) // Cambio aquí: 3 en lugar de 4
        {
            printf("%.1f\t", punto[i][j]);
        }
        printf("\n");
    }
}

void imprimirPuntos(float punto[][3], int filas)
{
    printf("Componentes de los Puntos:\n");

    for (int i = 0; i < filas; i++)
    {
        printf("Punto %d:\nX = %.1f\nY = %.1f\nZ = %.1f \n",
               i + 1, punto[i][0], punto[i][1], punto[i][2]);
    }
}
float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}
float calcularVolumen(float punto[3][3])
{
    float radio = calcularDistancias(punto[0][0], punto[0][1], punto[0][2], punto[1][0], punto[1][1], punto[1][2]);
    float altura = calcularDistancias(punto[0][0], punto[0][1], punto[0][2], punto[2][0], punto[2][1], punto[2][2]);
    return (3.14 * pow(radio, 2) * altura) / 3;
}
