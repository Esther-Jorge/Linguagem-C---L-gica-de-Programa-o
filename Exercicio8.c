#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ficha {
	char nome[250];
	int idade; 
	float peso, altura;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Caracteristicas de uma pessoa
	
	struct ficha pessoa;
	
	//Solicitando dados do usuario
	printf("Digite seu nome: ");
	gets(pessoa.nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &pessoa.peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &pessoa.altura);
	
	system("cls");
	
	//Mostrando dados do usuario
	printf("\nNome: %s \n",pessoa.nome);
	printf("Idade: %d \n", pessoa.idade);
	printf("Peso: %.2f \n", pessoa.peso);
	printf("Altura: %.2f \n",pessoa.altura);
	
	
	
	return 0;
}
