#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero[5]={50,20,10,70,15};
	int i, valor;
	
	printf("Qual eh o valor a procurar?\n");
	scanf("%d", &valor);
	
	for(i=0;i<4;i++){
		if(valor==numero[i]){
			printf("Valor encontrado...\n");
			exit(1);
		}
	}
	printf("Valor nao encontrado...\n");
	system("pause");
}
