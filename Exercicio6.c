#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int i;
    char nomes[3][250];

    for (i = 0; i < 3; i++){
        printf("Digite o %d° nome: ", i+1);
        gets(nomes[i]);
    }
    printf("\n");

    for (i = 0; i < 3; i++){
        printf("%d° nome: %s \n", i+1, nomes[i]);
    }
    return 0;
}