/* Criar um algoritmo que leia um n�mero e imprima conforme o exemplo a seguir: 
   Exemplo:
   N�mero: 5
   Como foi digitado o n�mero 5 a impress�o ficaria assim:
   5          4          3          2          1
   5          4          3          2
   5          4          3
   5          4         
   5   
*/

#include<stdlib.h>
#include<stdio.h>

main(){
	
int a;
printf("Digite um numero: ");
scanf("%d",&a);

for (int b = 0; b < a; b=b+1){
	int c = a;
	while(c!=b){
		printf(" %d",c);
		c=c-1;
	}
	printf("\n");
 	}

}
