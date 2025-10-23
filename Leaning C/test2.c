/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

//leia o nome de n alunos e a quantidade de provas da disciplina
//preencha aleatoriamente a nota de cada prova de cada aluno(as provas possuem a mesma nota)
//ao final imprima:

//quadro de notas (aluno e notas) e a soma
//nota final de cada aluno na disciplina
//quem foi aprovado (soma >= 60)
//quem ficou de provao(40 => e soma < 60)
//quem ficou acima da media

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char string[100];

int main() {
 
	
	int n, m;
	srand(time(NULL));
 
	printf("Digite a quantidade de alunos: ");
	scanf(" %d", &n);
 
	printf("Digite a quantidade de provas da disciplina: ");
	scanf(" %d", &m);
 
	int soma[n];
	int mat[n][m];  
	string nome[n];
	 
	
	for(int i = 0; i < n; i++){
		printf("Digite o nome do aluno: "); 
		scanf(" %[^\n]s", nome[i]); 
	}
	
	//preechendo a matriz 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			mat[i][j] = rand() % 21;
		}
	}
	
	//zerando a soma 
	for(int i = 0; i < n; i++){
		soma[i] = 0;
	}	
	
	//quadro de notas
	printf("Quadro de notas: \n");
	for (int i = 0; i < n; i++){
		printf("Nome: %s\t\tNotas", nome[i]);
		for(int j = 0; j < m; j++){
			printf("%d ", mat[i][j]);
			soma[i] += mat[i][j];
		}
		printf("\t\tTotal de pontos : %d.0\n", soma[i]);
	}
	
	printf("\n");
	//resultados finais 
	for(int i = 0; i < n; i++) {
		if(soma[i] >= 40 && soma[i] < 60) {
			printf("O Aluno %s ficou no provao final com a nota %d pontos \n", nome[i], soma[i]);
			int num = rand() % 2;
			printf("\nResultado do provao: \n");
			if(num)
				printf("%s passou no provao :D\n", nome[i]);
			else
				printf("%s nao passou no provão :/\n", nome[i]);
				
		} else if(soma[i] == 60) { 
			printf("O Aluno %s foi aprovado na media com a nota de %d pontos: \n", nome[i], soma[i]);
		} 
		else 
			printf("O aluno %s foi reprovado \n", nome[i]);
	}
	
	printf("\nAlunos que ficaram acima da media:\n");
	for(int i = 0; i < n; i++){
		if(soma[i] > 60)
		printf("%s\n", nome[i]);
	}

}
 
