#include <stdio.h>

int main() {
    float sueldo_base, sueldo_final;
    int categoria, antiguedad;


    printf("Ingrese sueldo base: ");
    scanf("%f", &sueldo_base);
    printf("Ingrese categoría (1-otro): ");
    scanf("%d", &categoria);
    printf("Ingrese antigüedad (años): ");
    scanf("%d", &antiguedad);


    if (categoria == 1) {
        sueldo_final = sueldo_base + (antiguedad * 50);
    } else {
        sueldo_final = sueldo_base;
    }


    printf("Sueldo final: $%.2f\n", sueldo_final);
    return 0;
}
