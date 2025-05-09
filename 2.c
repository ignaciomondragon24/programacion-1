#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
