#include <stdio.h>
#include <stdlib.h>

int main()
{

int valor;

prinft(" Informe um número:\n");
scanf("%d",&valor);

prinft(" Valor: %d\n",valor);

if (valor == 10){
    prinft(" Valor igual a 10.\n");
}else if (valor > 10){
    prinft(" Valor maior que 10.\n");
}else{
    prinft(" Valor menor que 10.\n");
}

system("pause");

    return 0;
}


