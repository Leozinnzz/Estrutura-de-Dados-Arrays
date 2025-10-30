#include <stdio.h>  
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

int main(){
	srand(time(NULL));
	
	FILE* arq = fopen("wordlist.txt","r");
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
		//printf("Nome: %s\n",nomes[c]);		
		c++;
	}

	printf("ORDENE AS PALAVRRAS POR ORDEM ALFABETICA: \n");
	
	char sort[10][10]; 
	
	//sortear numeros aleatorios
	for(int i = 0; i < 10; i++) {
		strcpy(sort[i], nomes[rand() % 100]);
	}
	
	int p1, p2;
	
	do { 
	
		for(int i = 0; i < 10; i++) {
			printf("[%d]: %s\n", i, sort[i]);
		} 
		
		printf("Informe o PAR de valores para TROCA: \n");
		scanf("%d %d", &p1, &p2);
		
		char temp[50];
		strcpy(temp, sort[p1]);
		strcpy(sort[p1], sort[p2]);
		strcpy(sort[p2], temp);
		
		system("clear");
	

	}while(1);
	
	





}
