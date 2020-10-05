//Faça um algoritmo que leia o nome, idade, sexo, endereço, telefone, celular e nota de um usuário. Imprima os dados do usuário na tela.

#include<stdio.h>
#include<stdlib.h>

main(){
 char nome[25], sexo[20], end[40];
 int nota, idade, telefone[15], celular[15];

 printf("Nome: ");
 scanf("%s",nome);
 printf("Idade: ");
 scanf("%d",&idade);
 printf("Sexo: ");
 scanf("%s",sexo);
 printf("Endereco: ");
 scanf(" %[^\n]s",end);  
 printf("Telefone: ");
 scanf("%s",&telefone);
 printf("Celular: ");
 scanf("%s",&celular);
 printf("Nota: ");
 scanf("%d",&nota);

 printf("\nNome cadastrado: %s",nome);
 printf("\nIdade cadastrada: %d", idade);
 printf("\nSexo cadastrado: %s", sexo);
 printf("\nEndereco cadastrado: %s",end);
 printf("\nTelefone cadastrado: %s", telefone);
 printf("\nCelular cadastrado: %s", celular);
 printf("\nNota cadastrada: %d\n", nota);
}

