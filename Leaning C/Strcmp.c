+/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 100
#define NOME 100

int main() {

	char nomes[TAMANHO][NOME];
	char temp[NOME];
	int cont = 0;
	
	while(cont < TAMANHO){
		printf("Digite um nome(ou 'exit' para encerrar): ");
		scanf(" %[^\n]s", temp);
		 
		
		if(!strcmp(temp, "exit"))
			break;
		
		/*if(!cont) {
			strcpy(nomes[cont], temp);
			cont++;
			continue;
		}
		
		if(strcmp(temp, nomes[cont-1]) <= 0)
			continue;
		*/
		
		if (cont && strcmp(temp, nomes[cont-1]) <= 0) 
			continue;
		
		strcpy(nomes[cont], temp);
		cont++;
   }
   
   system("clear");
   for(int i = 0; i < cont; i++){ 
		printf("%s\n", nomes[i]);
	}
	
		
		
		
		
    
    
    
}


