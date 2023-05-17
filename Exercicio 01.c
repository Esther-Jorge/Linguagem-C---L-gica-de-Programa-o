#include <stdio.h>
#include <stdlib.h>

int main()
{
//Variaveis
int idade;

//Solicitando informações para o usuario
printf(" Digite sua idade:\n");
scanf("%d",&idade);

system("cls");

//Mostranto as informações para o usuario 
printf(" Sua idade: %d\n",idade);

if (idade >= 18){
    printf(" Maior de idade.\n");
} else {
    printf(" Menor de idade.\n");
}

system("pause");

    return 0;
}