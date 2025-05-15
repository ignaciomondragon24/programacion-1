//5. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int valor1, valor2, valor3, valor4;
    int suma;


    printf("Ingrese valor1: ");
    scanf("%d", &valor1);


    printf("Ingrese valor2: ");
    scanf("%d", &valor2);


    printf("Ingrese valor3: ");
    scanf("%d", &valor3);


    printf("Ingrese valor4: ");
    scanf("%d", &valor4);


    suma = valor1 + valor2;
    suma = valor3 + valor4;


    if(valor1+valor2>valor3+valor4)
    printf("La suma 1 es mayor.\n");
    if(valor3+valor4>valor1+valor2)
    printf("La suma 2 es mayor.\n");
    return 0;
}
