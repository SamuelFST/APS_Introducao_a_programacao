/* Criar um algoritmo que leia um número e imprima conforme o exemplo a seguir: 
   Exemplo:
   Número: 5
   Como foi digitado o número 5 a impressão ficaria assim:
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
