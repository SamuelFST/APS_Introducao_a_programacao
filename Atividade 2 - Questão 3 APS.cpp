/*  Escreva um programa que armazene 5 números reais (UTILIZE ESTRUTURA DE REPETIÇÃO). 
    Informar quantos números existem em cada faixa:
      Faixa 1 -> 10    -     50
      Faixa 2 -> 60    -     110.5
      Faixa 3 -> 120   -     150.5 */

#include<stdlib.h>
#include<stdio.h>

main(){
	float num[5];
	int faixa1=0, faixa2=0, faixa3=0;
	
	for (int i=1; i<=5; i=i+1){
		printf("Digite um numero: ");
		scanf("%f",&num[i]);
	}
	for ( int i=1; i<=5; i=i+1){
		if ( (num[i]<=50) && (num[i]>=10) ){
			faixa1= faixa1+1;
		}
		if ( (num[i]<=110.5) && (num[i]>=60) ){
			faixa2= faixa2+1;
		}
		if ( (num[i]<=150.5) && (num[i]>=120) ){
			faixa3= faixa3+1;
		}
	}
	
	printf("\nFaixa 1 (10-50) contem: %d numero(s)",faixa1);
	printf("\nFaixa 2 (60-110.5) contem: %d numero(s)",faixa2);
	printf("\nFaixa 3 (120-150.5) contem: %d numero(s)",faixa3);
	
	
}
