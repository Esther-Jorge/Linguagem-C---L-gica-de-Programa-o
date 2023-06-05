#include <stdio.h>
#include <stdlib.h> 
//Crie um algoritmo que leia o nome e a idade de 5 pessoas,armazenando em vetores.- Liste o nome e a idade de cada 
//pessoa.
int main (){

int i, idade;
char nome[50];

for (i = 0; i < 5; i++)
{
    printf("Digite seu nome: \n");
    scanf("%c", &nome[i]);
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
}

for (i = 0; i < 5; i++)
{
printf("%cº nome: %c \n");
printf("Idade: %d \n");
}

    return 0;
}