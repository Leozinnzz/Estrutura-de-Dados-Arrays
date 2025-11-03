#include <stdio.h>  
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

#define TAMANHO 3
#define CHUTES 26

int main(int args, char* arquivo[]){
	srand(time(NULL));
	
	if(args != 2) {
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
	//inicio do jogo da forca
	char sort[TAMANHO][50]; 
	char revelada[TAMANHO][50];
	
	char letrasM[20];
	char resp;
	int tamanho[3];

	
	//preencher as palavras aleatorias
	for(int i = 0; i < TAMANHO; i++) { 
		strcpy(sort[i], nomes[rand() %c]);
	}
	
	int qtdLetras = 0;
	int inc = 0;
	
	
	do {
		
		system("clear");
		printf("\nJOGO DA FORCA\n");
		
		
		//preencher as linhas 
		for(int i = 0; i < TAMANHO; i++) {
			tamanho[i] = strlen(sort[i]);
			for(int j = 0; j < tamanho[i]; j++) {
				revelada[i][j] = '_';
				if(sort[i][j] == ' ') {
						revelada[i][j] = ' ';
				}
				else { 
					for(int k = 0; k < qtdLetras; k++) {
						if(letrasM[k] == sort[i][j]) { 
							revelada[i][j] = sort[i][j];
							break; 
						}
					}
				}
			}
			revelada[i][tamanho[i]] = '\0';
		}
		
		for(int i = 0; i < TAMANHO; i++) {
			for(int j = 0; sort[i][j] != '\0'; j++) {
					printf(" %c ", revelada[i][j]);
					
			}
			printf("\n");
		}

		printf("\nTente adivinhar as 3 palavras abaixo...\n");
		
		printf("\nLetras informadas: ");
		for(int i = 0; i < qtdLetras; i++) 
			printf("%c", letrasM[i]);
			
		
		printf("\nLetras incorretas: %d", inc);
		printf("\n");
		
		printf("\nDigite um caractere: "); 
		scanf(" %c", &resp);
		
		//converter para maiuscula
		if(resp >= 'a' && resp <= 'z') 
			resp = resp - 32;
		
		//encontrar a letra repetida
		int repet = 0;
		for(int i = 0; i < qtdLetras; i++) {
			if(letrasM[i] == resp) {
				repet = 1;
				break;
			} 	
		}
		
		if(repet) {
			printf("VOCE JA INFORMOU ESSA LETRA ANTES ");
			while(getchar() != '\n'); 
			getchar();
			continue;
		}
		
		letrasM[qtdLetras] = resp;
		qtdLetras++;
		
		int letraR = 1;
		//encontrar a letra e revela-la
		for(int i = 0; i < TAMANHO; i++) {
			for(int j = 0; sort[i][j] != '\0'; j++) {
				if(sort[i][j] == resp) {
					revelada[i][j] = resp;
					letraR = 0;
				} 
			}
		}
		
		if(letraR) 
			inc++;
		
		
		int completas = 1;
		for(int i = 0; i < TAMANHO; i++) {
			for(int j = 0; sort[i][j] != '\0'; j++) {
				if(revelada[i][j] == '_') { 
					completas = 0; 
					break;
				}
			}
			if(!completas) 
				break;
		} 
		
			
		if(completas) { 
			printf("\nPARABENS!! VOCE GANHOU O JOGO\n");
			break;
		}
		
	}while(1); 
}
