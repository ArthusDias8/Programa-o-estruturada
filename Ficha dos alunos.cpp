#include <stdio.h>
#include <string.h>

int main(){
	
	struct ficha_aluno{
		char nome1[60], nome2[60], nome3[60], nome4[60], nome5[60], nome6[60], nome7[60], nome8[60], nome9[60], nome10[60];
		int matricula1, matricula2, matricula3, matricula4, matricula5, matricula6, matricula7, matricula8, matricula9, matricula10;
		float media1, media2, media3, media4, media5, media6, media7, media8, media9, media10, n1, n2, n3, n4;
	};
	
	int i;
	
	struct ficha_aluno aluno;
	
	printf("Digite seu nome: ");
	scanf("%s[^/n]", aluno.nome1);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula1);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media1 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}

	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome2);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula2);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media2 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome3);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula3);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media3 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
		scanf("%s[^/n]", aluno.nome4);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula4);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media4 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome5);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula5);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media5 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome6);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula6);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media6 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome7);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula7);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media7 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome8);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula8);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media8 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome9);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula9);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media9 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nDigite seu nome: ");
	scanf("%s[^/n]", aluno.nome10);
		
	printf("Digite sua matricula: ");
	scanf("%d", &aluno.matricula10);
	
	for(i=0; i<1; i++){
		printf("Digite sua nota 1: ");
		scanf("%f",&aluno.n1);
		
		printf("Digite sua nota 2: ");
		scanf("%f",&aluno.n2);
		
		printf("Digite sua nota 3: ");
		scanf("%f",&aluno.n3);
		
		printf("Digite sua nota 4: ");
		scanf("%f",&aluno.n4);
		
		aluno.media10 = (aluno.n1 + aluno.n2 + aluno.n3 + aluno.n4)/4;
	}
	
	printf("\nO nome do aluno 1 e %s\n", aluno.nome1);
	printf("A matricula do aluno 1 e %d\n", aluno.matricula1);
	printf("A media do aluno 1 e %f\n\n", aluno.media1);
	
	printf("O nome do aluno 2 e %s\n", aluno.nome2);
	printf("A matricula do aluno 2 e %d\n", aluno.matricula2);
	printf("A media do aluno 2 e %f\n\n", aluno.media2);
	
	printf("O nome do aluno 3 e %s\n", aluno.nome3);
	printf("A matricula do aluno 3 e %d\n", aluno.matricula3);
	printf("A media do aluno 3 e %f\n\n", aluno.media3);
	
	printf("O nome do aluno 4 e %s\n", aluno.nome4);
	printf("A matricula do aluno 4 e %d\n", aluno.matricula4);
	printf("A media do aluno 4 e %f\n\n", aluno.media4);
	
	printf("O nome do aluno 5 e %s\n", aluno.nome5);
	printf("A matricula do aluno 5 e %d\n", aluno.matricula5);
	printf("A media do aluno 5 e %f\n\n", aluno.media5);
	
	printf("O nome do aluno 6 e %s\n", aluno.nome6);
	printf("A matricula do aluno 6 e %d\n", aluno.matricula6);
	printf("A media do aluno 6 e %f\n\n", aluno.media6);
	
	printf("O nome do aluno 7 e %s\n", aluno.nome7);
	printf("A matricula do aluno 7 e %d\n", aluno.matricula7);
	printf("A media do aluno 7 e %f\n\n", aluno.media7);
	
	printf("O nome do aluno 8 e %s\n", aluno.nome8);
	printf("A matricula do aluno 8 e %d\n", aluno.matricula8);
	printf("A media do aluno 8 e %f\n\n", aluno.media8);
	
	printf("O nome do aluno 9 e %s\n", aluno.nome9);
	printf("A matricula do aluno 9 e %d\n", aluno.matricula9);
	printf("A media do aluno 9 e %f\n\n", aluno.media9);
	
	printf("O nome do aluno 10 e %s\n", aluno.nome10);
	printf("A matricula do aluno 10 e %d\n", aluno.matricula10);
	printf("A media do aluno 10 e %f\n\n", aluno.media10);
	

}
