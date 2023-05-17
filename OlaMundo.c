#include <stdio.h>

int main() 
{
   //int idade = 10;
   //float peso = 50.5;
   //char nome[10] = "Marta";
   //char sexo = 'F';

   int idade;
   float peso;
   char nome[10];
   char sexo;
  

   printf(" Digite sua idade:\n");
   scanf("%d",&idade);

   printf(" Digite seu peso:\n");
   scanf("%f", &peso);

   printf(" Digite seu nome:\n");
   scanf("%s", &nome); 

   printf(" Digite seu sexo:");
   scanf(" %c", &sexo); //adcionar espaço

   

   printf("Idade %d\n", idade);
   printf(" Peso: %f\n", peso);
   printf(" Nome: %s\n", nome);
   printf("Sexo: %c\n", sexo); 


    return 0;

}