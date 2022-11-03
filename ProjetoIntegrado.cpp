#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main (){

    int tell = 0;
    char nome[30] = "";
    char ende2[25] = "";

    printf("Digite seu telefone: %d.\n", tell);
    scanf("%d", &tell);
    
    printf("Digite seu nome: %s.\n", nome);
    scanf("%s", &nome);

    printf("Digite seu Endereco: %s.\n", ende2);
    scanf("%s", &ende2);

    printf("DADOS PESSOAIS, FAVOR NAO COMPARTILHAR!\n");
    printf("Seu Nome: %s \n",nome);
    printf("Seu endereco: %s \n",ende2);
    printf("Seu telefone: %d \n", tell);

system("pause");

}