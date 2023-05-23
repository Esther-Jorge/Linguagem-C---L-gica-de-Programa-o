#include <stdio.h>
#include <stdlib.h>

void main()
{
int idade;

printf("Digite sua idade: ");
scanf("%d",&idade);

if(idade < 18 || idade >= 65){
    printf("Nao e obrigatorio votar.");
}else{
    printf("Obrigado a votar!");
}

}