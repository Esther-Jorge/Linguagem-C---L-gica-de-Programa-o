#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um algoritmo que receba o três notas de 2 semestres
int main(){

setlocale(LC_ALL,""); // para aceitar acentos

int i,j;
char disciplinas[3][250];
float notas[3][2];
float media[3];
float somaNotas;

for (i = 0; i < 3; i++)
{
    printf("Digite o nome da %dª disciplina: ",i+1);
    gets(disciplinas[i]);

    for (j = 0; j < 2; j++)
    {
        printf("Digite o valor da %dªnota: ", j+1);
        scanf("%f", &notas[i][j]);

        somaNotas += notas[i][j];
    }
    
    media[i] = somaNotas / j; // j sai do laco com valor 2.
    somaNotas = 0;
    fflush(stdin);
}
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº nome: %s \n", i+1, disciplina[i];)
    }
    

    return 0;
}