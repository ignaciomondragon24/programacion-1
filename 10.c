#include <stdio.h>


int main() {
    float sueldo_base, sueldo_final;
    int categoria, antiguedad;


    // Entrada de datos
    printf("Ingrese sueldo base: $");
    scanf("%f", &sueldo_base);
    printf("Ingrese categoría (1 para bonificación, otro no): ");
    scanf("%d", &categoria);
    printf("Ingrese antigüedad (años): ");
    scanf("%d", &antiguedad);


    // Cálculo de sueldo final
    sueldo_final = sueldo_base;
    if (categoria == 1) {
        sueldo_final += antiguedad * 50;
    }


    // Mostrar solo si antigüedad > 5
    if (antiguedad > 5) {
        printf("\nSueldo final: $%.2f\n", sueldo_final);
    }


    return 0;
}
