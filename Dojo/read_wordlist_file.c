#include <stdio.h>  //standart In Out
#include <stdlib.h> 
#include <time.h> 

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
	}w

	char nomes[50][100];
	int c = 0;
		
	while(1){
		fscanf(arq," %[^\n]s",nomes[c]);
		if(feof(arq))
			break;
		//printf("Nome: %s\n",nomes[c]);		
		c++;
	}

	do{
		printf("Nome: %s\n",nomes[rand()%c]);
		getchar();
	}while(1);

}
