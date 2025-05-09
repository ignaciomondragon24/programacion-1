#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int valor1, valor2, valor3;
    int suma;
    float promedio;

    printf("Ingrese valor1: ");
    scanf("%d", &valor1);

    printf("Ingrese valor2: ");
    scanf("%d", &valor2);

    printf("Ingrese valor3: ");
    scanf("%d", &valor3);

    suma = valor1 + valor2 + valor3;
    promedio = (float)suma / 3;

    if (valor1 > promedio)
        printf("El valor1 es mayor al promedio.\n");

    if (valor2 > promedio)
        printf("El valor2 es mayor al promedio.\n");

    if (valor3 > promedio)
        printf("El valor3 es mayor al promedio.\n");

    return 0;
}
