//8. Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida,
// considerar los años bisiestos

#include <stdio.h>

// Función para verificar si un año es bisiesto
int esBisiesto(int año) {
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return 1; // Es bisiesto
    }
    return 0; // No es bisiesto
}

int main() {
    int dia, mes, año;
    
    // Entrada de datos
    printf("Ingrese el día: ");
    scanf("%d", &dia);
    
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    
    printf("Ingrese el año: ");
    scanf("%d", &año);
    
    // Validación del mes
    if (mes < 1 || mes > 12) {
        printf("Fecha inválida. El mes debe estar entre 1 y 12.\n");
        return 0; // Termina el programa
    }
    
    // Determinar el máximo de días según el mes
    int maxDia;
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDia = 31;
            break;
        case 4: case 6: case 9: case 11:
            maxDia = 30;
            break;
        case 2: // Febrero
            maxDia = esBisiesto(año) ? 29 : 28;
            break;
    }
    
    // Validación del día
    if (dia < 1 || dia > maxDia) {
        printf("Fecha inválida. El día debe estar entre 1 y %d para el mes %d.\n", maxDia, mes);
    } else {
        printf("La fecha %d/%d/%d es válida.\n", dia, mes, año);
    }
    
    return 0;
}
