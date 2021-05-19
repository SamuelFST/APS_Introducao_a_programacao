/* Solicitar números reais do usuário (UTILIZE ESTRUTURA DE REPETIÇÃO) e imprimir: Total de números entre 20 e 50. Total de números menores que 4. 
   O programa termina quando o número for um número negativo (que não deve ser considerado na contagem). */

#include<stdlib.h>
#include<stdio.h>

main(){
    int num=0, total=0, menos=0;
	
	while(1){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if (num<0){ 
		break;
		}
		if ( (num >=0) && (num <4) ){
			menos++;
		}
		if ( (num >= 20) && (num <= 50) ){
			total++;
		}	
	}
	
	printf("\nTotal de numeros entre 20 e 50: %d",total);
	printf("\nTotal de numeros menores que 4: %d",menos);
	
}
