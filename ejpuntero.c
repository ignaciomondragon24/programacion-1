#include <stdio.h>

int main() {
    // Declaración de variables
    int *datoptr;  // Puntero a entero
    int dato;      // Variable entera
    
    // Asignación de valor a la variable
    dato = 5;
    
    // Uso del operador de dirección (&)
    // Asigna la dirección de memoria de 'dato' al puntero 'datoptr'
    datoptr = &dato;
    
    // Imprimir resultados
    printf("Valor de dato: %d\n", dato);
    printf("Dirección de dato: %p\n", &dato);
    printf("Valor de datoptr: %p\n", datoptr);
    printf("Valor al que apunta datoptr: %d\n", *datoptr);
    
    // Modificación a través del puntero
    *datoptr = 10;
    printf("\nDespués de modificar *datoptr = 10:\n");
    printf("Valor de dato: %d\n", dato);
    printf("Valor al que apunta datoptr: %d\n", *datoptr);
    
    return 0;
}