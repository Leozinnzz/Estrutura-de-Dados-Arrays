/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 88

typedef struct{
	char nome[10];
	char simbolo;
}Player;

int numPlayers(){
	int n;
	printf("Vão ser qunatos jogadores: \n");
	scanf("%d", &n);
	return n;
}

int setPlayer(Player *p)
	printf("\nInforme o Nome dos 4 Competidores (MAX 10 caracteres/nome)\n", n);
	printf("Seguindo de um simbolo (char): \n");
	printf("Nome %0d e simbolo escolhido: ", n);
	scanf(" %s", p->nome);
	int len = strlen(p->nome);
	if(len > 10){
		printf("Nome muito Extenso (Máx. 10 caracteres)... Tente novamente!\n");
		continue;
	}
	scanf(" %c", &p->simbolo);
	return p;
}


int main() {
	
	setPlayer(&p);
	int n = numPlayers();
	Player p[n];
	
	
	
}


