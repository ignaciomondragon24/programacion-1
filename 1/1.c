//1. Ingresar dos valores, indicar e imprimir si son iguales

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int val1, val2;
printf("ingrese valor 1: .\n");
scanf("%d",&val1);
printf("ingrese valor 2: .\n");
scanf("%d",&val2);
if(val1==val2){
printf("Los valores son iguales .\n");
}
else{
printf("Los valores NO son iguales .\n");}
return 0;
}
