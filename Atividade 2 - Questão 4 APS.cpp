/* Escreva um algoritmo que receba números inteiros. Determine o menor, maior, a soma e a média dos 
   números (CRIE UMA FUNÇÃO PARA CADA OPERAÇÃO). O programa somente será finalizado quando o usuário 
   digitar o número 0 (zero) (não deve ser considerado nas comparações). */

#include<stdio.h>
#include<stdlib.h>

int numero, menor = INT_MAX, maior = INT_MIN, soma = 0; 
float media;

 float num_media(float x, float y){
	media = x / y;
	
	return media;
}

 int num_menor(int x){
 	if(x < menor){
		menor =  x;
	}
		return menor;
}

 int num_maior(int x){
	if(x > maior){
		maior = x;
	}
		return maior;
}

 int num_soma(int x){
	soma= soma + x;
	
	return soma;
}

main(){
	int contador; 
	
	numero = 1;

	for(contador = 1; numero != 0; contador += 1){		
		printf("Digite um numero: "); scanf("%d", &numero);
		
		if (numero == 0)
			break;			
		else{
			menor = num_menor(numero);
			maior = num_maior(numero);
			soma = num_soma(numero);
			media = num_media(soma, contador);
		}				
		
		if(numero == 0){
			if(contador == 1){
				printf("\nMenor numero: valor invalido \nMaior numero: valor invalido \nSoma: valor invalido \nMedia: valor invalido\n\n");
			}
			else{
				printf("\nMenor numero: %d \nMaior numero: %d \nSoma: %d \nMedia: %.1f\n\n", menor, maior, soma, media);
			}
		}		
		else{
			printf("\nMenor numero: %d \nMaior numero: %d \nSoma: %d \nMedia: %.1f\n\n", menor, maior, soma, media);
		}
		
	}
}
