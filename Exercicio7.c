#include <stdio.h>
#include <stdlib.h>


//Crie um programa que leia 3 notas, armazenando em um vetor e calcule a média aritmética.Mostre as 3 notas informadas pelo usuário e informe média.

int main ()
{
    int i;
    int contador;
    char notas[3][3];
    float media;

    for (i = 0; i < 3; i++){
        printf("Digite a %s° nota: ", i+1);
        gets(notas[i]);

        contador++;
    }

    printf("\n");

    media = notas[i]/contador++;

    for ( i = 0; i < 3; i++){
        printf("%s° nota:", notas);
        printf("Media: ", media);
    }
    return 0;
}