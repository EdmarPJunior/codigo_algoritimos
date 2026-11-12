#include<stdio.h>


//DECLARAÇÃO STRUCT
struct dados {
	int codigo;
	int idade;
	char nome[50];
	char sexo;
	float salario;
};

//vARIAVEL GLOBAL
dados cliente[5];


//IMPRIME DADOS
void imprimeDados() {
	int i;
	printf("\n===== DADOS DOS CLIENTES =====\n");
	for (i = 0; i < 5; i++) {
		 printf("\nCliente %d\n", i + 1);
		 printf("Codigo...:%d\n", cliente[i].codigo);
		 printf("Nome...:%s\n", cliente[i].nome);
		 printf("Idade...:%d\n", cliente[i].idade);
		 printf("Sexo M/F...:%c\n", cliente[i].sexo);
		 printf("Salario...:%.2f\n", cliente[i].salario);
	}
	
}


//FAZ A SOMA DAS IDADES
int somaIdades() {
	int i, soma = 0;
	for (i = 0; i < 5; i++) {
		soma = soma + cliente[i].idade;
	}
	return(soma);
		
}

//PROGRAMA PRINCIPAL
int main() {
	int i, soma;
	float media;
	
	
	//FAZ A ENTRADA DOS DADOS
	for (i = 0; i < 5; i++) {
		printf("\n--- Cadastro do cliente %d ---\n", i + 1);
		
		printf("Codigo: ");
		scanf("%d", &cliente[i].codigo);
		
		printf("Nome: ");
		fflush(stdin);
		gets(cliente[i].nome);
		
		printf("Idade: ");
		scanf("%d", &cliente[i].idade);
		
		printf("Sexo (M/F): ");
		scanf(" %c", &cliente[i].sexo);
		
		printf("Salario: ");
		scanf("%f", &cliente[i].salario);
	}
	
	
	// FAZ A LEITURA DOS DADOS
	imprimeDados();
	
	// CHAMA A FUNCÇÃO PRA SOMAR AS IDADES
	soma = somaIdades();
	
	//CÁLCULA DA MÉDIA
	media = (float)soma / 5;
	
	//IMPRIME RESULTADO NA TELA
	printf("\n\nA soma das idades e: %d", soma);
	printf("\nA media das idades e: %.2f", media);
	
	return(0);


	
}

