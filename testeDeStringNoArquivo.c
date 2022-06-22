#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	FILE *arq;
	char txt[100];
	
	if((arq = fopen("teste.txt","w"))==NULL){
		printf("Nao foi possivel abrir o arquivo!\n");
		exit(1);
	}
	
	do{
		gets(txt);
		strcat(txt,"\n");
		fputs(txt,arq);
	}while(*txt != '\n');
	
	fclose(arq);
	system("pause");
}
