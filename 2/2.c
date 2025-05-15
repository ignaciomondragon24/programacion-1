//2. Ingresar un valor indicar e imprimir si es positivo, negativo o cero

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int valor ;
printf("ingrese valor:");
scanf("%d",&valor);
if(valor>0){

printf("valor: POSITIVO .\n");
}
else{
	if(valor<0){
printf("valor: NEGATIVO .\n");

}else{
	printf("valor: cero");}

}
return 0;
}
