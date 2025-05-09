#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int lado1, lado2, lado3;

    printf("Ingrese lado 1:\n");
    scanf("%d", &lado1);

    printf("Ingrese lado 2:\n");
    scanf("%d", &lado2);

    printf("Ingrese lado 3:\n");
    scanf("%d", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Es un triángulo EQUILÁTERO.\n");
        }
        else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
            printf("Es un triángulo ESCALENO.\n");
        }
        else {
            printf("Es un triángulo ISÓSCELES.\n");
        }
    }
    else {
        printf("Los valores ingresados NO forman un triángulo válido.\n");
    }

    return 0;
}
