#include <stdio.h>

#define TAMANHO 100

int main(){
	
	float soma, media, soma_media_geral = 0;
	int i = 0;
	
	struct Endereco{
		char endereco[50];
		int numero;
	};
	
	struct Estudante{
		char matricula[50];
		char nome[100];
		float notas[4];
		struct Endereco end;
	};
	
	struct Estudante estudante_diego;
	estudante_diego.end.numero = 100
	
	struct Estudante estudante[TAMANHO];
	
	typedef struct{//typedef, define o tipo de dado
		int dia, mes, ano;
	}Data;
	
	for(i=0;1<TAMANHO;i++){
		fflush(stdin);
		printf("Informe a matricula do %do estudante: ", i+1);
		scanf("%s", &estudante[i].matricula);
		
		fflush(stdin);
		printf("Informe o nome do %do estudante: ", i+1);
		scanf("%s[^/n]",&estudante[i].nome);
		
		printf("Informe a notas 1: ");
		scanf("%f",&estudante[i].notas[0]);
		printf("Informe a notas 2: ");
		scanf("%f",&estudante[i].notas[1]);
		printf("Informe a notas 3: ");
		scanf("%f",&estudante[i].notas[2]);
		printf("Informe a notas 4: ");
		scanf("%f",&estudante[i].notas[3]);
	}
	
	printf("----------------------------------------\n");
	for(i=0;i<TAMANHO;i++){
		printf("Matricula: %s \n", estudante[i].matricula);
		printf("Nome: %s \n", estudante[i].nome);
		printf("N1: %.1f \n", estudante[i].notas[0]);
		printf("N2: %.1f \n", estudante[i].notas[1]);
		printf("N3: %.1f \n", estudante[i].notas[2]);
		printf("N4: %.1f \n", estudante[i].notas[3]);
		soma = estudante[i].notas[0] + estudante[i].notas[1] + estudante[i].notas[2] + estudante[i].notas[3];
		media = soma/4;
		soma_media_geral = soma_media_geral + media;
		printf("Media: %.1f \n", media);
		printf("----------------------------------------\n");	
	}
	
	printf("soma_media_geral: %.1f\n", soma_media_geral);
	printf("Media geral: %.1f\n", soma_media_geral/2);
}
