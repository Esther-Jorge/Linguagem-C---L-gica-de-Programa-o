#include <stdio.h>
#include <stdlib.h>
//Crie um algoritmo que leia o nome e a idade de 5 pessoas, armazenando em vetores.Liste o nome e a idade de cada 
// pessoa.

int main (){

char nome[50];
int i;

for (i = 0; i < 5; i++)
{
    printf("Digite seu nome: %s");
    scanf("%s", &nome[i]);
}
printf("%c,nome: %c \n", i+1, nome[i]);



    return 0;
}