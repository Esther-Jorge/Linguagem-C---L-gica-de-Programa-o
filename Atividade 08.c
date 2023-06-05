#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"");

    int numeros[6], i;

    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite o %d? numero: ", i+1);
            scanf("%d", &numeros[i]);
        } while (numeros[i]% 2 == 1);
        
    }
    
    for (i = 0; i < 6; i--)
    {
        printf("%d? numero: %d", i+1, numeros[i]);
    }
    

    return 0;
}