//11. Ingresar las horas trabajadas por un empleado y su categoría,
// calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50,
// la 2 cobra $ 70 y la 3 cobra $ 80

#include <stdio.h>

int main() {
    int horas, categoria;
    float sueldo;

    // Entrada de datos
    printf("Ingrese horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese categoría (1-3): ");
    scanf("%d", &categoria);

    // Cálculo de sueldo según categoría
    switch(categoria) {
        case 1:
            sueldo = horas * 50;
            break;
        case 2:
            sueldo = horas * 70;
            break;
        case 3:
            sueldo = horas * 80;
            break;
        default:
            printf("Error: Categoría inválida (debe ser 1-3)\n");
            return 1; // Terminar programa con error
    }

    // Mostrar resultado
    printf("El sueldo correspondiente es: $%.2f\n", sueldo);

    return 0;
}
