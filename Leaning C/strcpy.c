/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 3 
#define NOME 20

int main() {
	
	char nomes[TAMANHO][NOME]; 
	char temp[NOME];
	
	
	for(int i = 0; i < TAMANHO; i++) { 
		printf("Digite o %d nome: ", i+1); 
		scanf(" %[^\n]", nomes[i]);
		
		if(!i) {
			strcpy(temp, nomes[i]);
			continue;
		}
		
		if(strcmp(temp, nomes[i-1]) <= 0)
			continue;
			
		strcpy(nomes[i], temp); 
	}
	
	for(int i = 0; i < TAMANHO; i++)
		printf("Nomes em Ordem alfabética: %s \n", nomes[i]); 
	
	
	
}


