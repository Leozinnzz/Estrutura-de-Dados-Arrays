#include <stdio.h>  
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

#define TAMANHO 10

int main(int args, char* arquivo[]){
	srand(time(NULL));
	
	if(args != 2){
		printf("Execute ./programa nome_arquivo");
		return 0;
	}
	
	FILE* arq = fopen(arquivo[1],"r");
	if(!arq){
		printf("Arquivo não existente\n");
		return 0;
	}

	char nomes[500][100];
	int c = 0;
		
	while(1){
		fscanf(arq," %[^\n]s",nomes[c]);
		if(feof(arq))
			break;
		c++;
	}
	
	char sort[TAMANHO][50]; 
	char nomesOrdenados[TAMANHO][50];
	int cont = 0;
	
	//sortear numeros aleatorios
	for(int i = 0; i < TAMANHO; i++)
		strcpy(sort[i], nomes[rand() % c]);
	
	
	//copiar os nomes para o array
	for(int i = 0; i < TAMANHO; i++) 
		strcpy(nomesOrdenados[i], sort[i]);
	

	//ordenar as palavras buble sort de string geniall isso!!!!
	for(int i = 0; i < TAMANHO - 1; i++) { 
		for(int j = 0; j < TAMANHO - 1 - i; j++) {
			char aux[50];
			if(strcmp(nomesOrdenados[j], nomesOrdenados[j+1]) > 0) {
				strcpy(aux, nomesOrdenados[j]); 
				strcpy(nomesOrdenados[j],nomesOrdenados[j+1]);
				strcpy(nomesOrdenados[j+1], aux);
			}	
		}
	}
	
	//inicio do game
	int p1, p2;
	
	do { 
		
		printf("ORDENE AS PALAVRRAS POR ORDEM ALFABETICA: \n");
	
		for(int i = 0; i < TAMANHO; i++) {
			printf("[%d]: %s\n", i, sort[i]);
		} 
		
		printf("Informe o PAR de valores para TROCA: \n");
		scanf("%d%d", &p1, &p2);
		
		char temp[50];
		strcpy(temp, sort[p1]);
		strcpy(sort[p1], sort[p2]);
		strcpy(sort[p2], temp);
		system("clear");
		
		
		cont++;
		int end = 0;
		
		for(int i = 0; i < TAMANHO; i++) { 
			if(strcmp(sort[i], nomesOrdenados[i]) == 0)
				end++;
		}
		
		if(end == TAMANHO) {
			printf("PALAVRAS ORDENADAS! %d trocas até finalizar!", cont);
			break;
		}
		
		
	}while(1);
	
	





}
