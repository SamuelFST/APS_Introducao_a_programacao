/*Faça um programa em C que leia um número e verifique se está entre os seguintes valores: (Valor 0,2 ponto)
    Entre 55 e 85 (inclusos), escrever a mensagem: "Número entre 55 e 85".
    Entre 70 e 105 (inclusos), escrever a mensagem: "Número entre 70 e 105".
    Entre 100 e 170 (inclusos), escrever a mensagem: "Número entre 100 e 170" */

#include<stdlib.h>
#include<stdio.h>

main(){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	if ( (numero >=55) && (numero <= 85) ) {
		printf("\nNumero entre 55 e 85");
	}
	if ( (numero >=70) && (numero <=105) ) {
		printf("\nNumero entre 70 e 105");
	}
	if( (numero >=100) && (numero <=170) ) {
		printf("\nNumero entre 100 e 170");
	}
	
}
