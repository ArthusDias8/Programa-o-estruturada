#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *arq;
	char msg[80];
	printf("Entre o texto:\n");
	gets(msg);
	
	if((arq = fopen("arquivo.txt","a"))==NULL){
		printf("Nao foi possivel abrir o arquivo!\n");
	}else{
		fprintf(arq, "%s", msg);
		fclose(arq);
	}
}
