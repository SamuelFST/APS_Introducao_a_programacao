//Fa�a um programa que solicite 10 (dez) n�meros inteiros do usu�rio. Informe os n�meros, a soma e a m�dia.

#include<stdlib.h>
#include<stdio.h>

main(){
	int num[10], i;
	float soma, media;
	
	for(i=0; i<10;i++){
	printf("Digite o %d numero: ", i+1);
	scanf("%d",&num[i]);
	}
	
	for(i=0; i<10; i++){
	soma= soma +num[i];
	}
	
	media= soma/10;
	printf("\nSoma dos numeros: %.1f", soma);
	
	printf("\nMedia dos numeros: %.1f", media);
	
}
