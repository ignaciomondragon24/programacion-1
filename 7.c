#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float valorHora, sueldo;
    int horasTrabajadas;


    // Ingreso de datos
    printf("Ingrese el valor de la hora: ");
    scanf("%f", &valorHora);


    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horasTrabajadas);


    // Cálculo del sueldo base
    sueldo = valorHora * horasTrabajadas;


    // Premios según las horas trabajadas
    if (horasTrabajadas > 50) {
        sueldo += 100;
    }
    if (horasTrabajadas > 150) {
        sueldo += 100;
    }


    // Mostrar resultado
    printf("El sueldo total del empleado es: $%.2f\n", sueldo);


    return 0;
}
