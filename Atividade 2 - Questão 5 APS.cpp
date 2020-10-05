/* Escreva um algoritmo que leia 2 (dois) números, um real e outro inteiro, e com
   FUNÇÕES calcule a enésima potência de uma variável real x (UTILIZE UMA FUNÇÃO
   COM ESTRUTURA DE REPETIÇÃO E OUTRA COM POTÊNCIA) e imprima: f(x, n) = xn */ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calculo_potencia(float x, int n);

main(){
    float numeroReal, resultado;
    int numeroInteiro;
    char opcao;
    do{
        printf("\nInforme o numero da base: ");
		scanf("%f", &numeroReal);
        printf("Informe o expoente: "); 
		scanf("%d", &numeroInteiro);
        resultado = calculo_potencia(numeroReal, numeroInteiro);
        printf("f(%.f,%d) = %.2f", numeroReal, numeroInteiro, resultado);
        printf("\n\nDeseja Continuar? [S/N]: "); scanf(" %c", &opcao);
    }while((opcao == 'Sim') || (opcao == 'sim'));
    
}
float calculo_potencia(float x, int n){
    float potencia;
    potencia = pow(x,n);
    return potencia;
}
