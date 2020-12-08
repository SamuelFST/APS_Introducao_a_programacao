/* Escrever um programa que receba vários números inteiros positivos maiores que 0 (UTILIZE ESTRUTURA DE REPETIÇÃO) e no final imprimir
    a quantidade de números múltiplos de 2 (dois) e múltiplos de 5 (cinco). Para sair digitar o número 0 (zero). */
    
#include<stdlib.h>
#include<stdio.h>

main(){
	int num=1, mulcinco, muldois;
	
	for ( ; num!=0; ){
		printf("Digite um numero positivo: ");
		scanf("%d",&num);
	
	if (num==0){
		break;
	}
    else if (num%2==0){
    	muldois=muldois+1;
	}
	else if (num%5==0){
		mulcinco=mulcinco+1;
	}
			
  }
  muldois=muldois-1;
  
  printf("\nQuantidade de numeros multiplos de 2: %d",muldois);
  printf("\nQuantidade de numeros multiplos de 5: %d",mulcinco);
	
}
