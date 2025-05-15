//6. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int edad1, edad2;
    float altura1, altura2;


    // Ingresar edad y altura de la primera persona
    printf("Ingrese la edad de la primera persona: ");
    scanf("%d", &edad1);
    printf("Ingrese la altura de la primera persona (en metros): ");
    scanf("%f", &altura1);


    // Ingresar edad y altura de la segunda persona
    printf("Ingrese la edad de la segunda persona: ");
    scanf("%d", &edad2);
    printf("Ingrese la altura de la segunda persona (en metros): ");
    scanf("%f", &altura2);


    // Comparar edades e imprimir la altura del de mayor edad
    if (edad1 > edad2) {
        printf("La estatura del de mayor edad es: %.2f metros\n", altura1);
    } else if (edad2 > edad1) {
        printf("La estatura del de mayor edad es: %.2f metros\n", altura2);
    } else {
        printf("Ambas personas tienen la misma edad.\n");
    }


    return 0;
}


