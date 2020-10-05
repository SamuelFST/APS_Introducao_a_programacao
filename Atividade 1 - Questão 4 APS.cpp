/* Um comerciante comprou um produto e quer vendê-lo com lucro de 35% se o valor
   da compra for menor que 300,00; caso contrário, o lucro será de 50%. 
   Entrar com o valor do produto e imprimir o valor da venda. */

#include<stdlib.h>
#include<stdio.h>

main(){
	float lucro, produto;
	
	printf("Digite o valor do produto: ");
	scanf("%f",&produto);
	if ( produto <300 ) {
		lucro= produto+ (produto*0.35);
		printf("O valor de venda sera: %.1f ",lucro);
	}
	if ( produto >=300 ) {
		lucro= produto+ (produto*0.50);
		printf("O valor de venda sera: %.1f",lucro);
	}
		
}
