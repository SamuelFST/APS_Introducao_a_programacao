/* Solicitar n�meros reais do usu�rio (UTILIZE ESTRUTURA DE REPETI��O) e imprimir: Total de n�meros entre 20 e 50. Total de n�meros menores que 4. 
   O programa termina quando o n�mero for um n�mero negativo (que n�o deve ser considerado na contagem). */

#include<stdlib.h>
#include<stdio.h>

main(){
    int num=1, total=0, menos;
	
	for ( ; num>=0; ){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if (num<0){ 
		break;
		}
		if ( (num >=0) && (num <4) ){
			menos=menos+1;
		}
		if ( (num >= 20) && (num <= 50) ){
			total=total+1;
		}
		
		
	}
	menos=menos-1;
	
printf("\nTotal de numeros entre 20 e 50: %d",total);
printf("\nTotal de numeros menores que 4: %d",menos);
	
	
	
	
	
}

