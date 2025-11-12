/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIMULACAO 100000
#define SIZE 10

int main() {
    
    srand(time(NULL));
	
	int vet[SIZE];
	int repet;
	int flag;
	int n = 1;
	
	//encontrar n de numeros nao repetidos
	do {
		repet = 0;
		for( int i = 0; i < SIMULACAO; i++) {
			flag = 0; 
			for(int j = 0; j < SIZE; j++) { 
					vet[j] = rand() % n;
				for(int k = j+1; k < SIZE; k++) {
					if(vet[j] == vet[k]) {
						flag = 1;
						break;
					}
				}
				if(flag) 
					break;
			}
			if(flag) 
				repet++;
		}
		
		float percentagem = ((float)repet / SIMULACAO) * 100;
		
		if(percentagem == 100.0f) {
			printf("\n 100%% dos cenarios numero %d \n", n);
			printf("\nPorcentagem : %f%% \n", percentagem);
			break;
		}
		
		n++;
	}while(1);
	
	//encontrar 0%
	n = 1;
	do {
		repet = 0;
		for( int i = 0; i < SIMULACAO; i++) {
			flag = 0; 
			for(int j = 0; j < SIZE; j++) { 
				vet[j] = rand() % n;
				for(int k = j+1; k < SIZE; k++) {
					if(vet[j] == vet[k]) {
						flag = 1;
						break;
					}
				}
				if(flag) 
					break;
			}
			if(!flag) 
				repet++;
		}
		
		float percentagem = ((float)repet / SIMULACAO) * 100;
		
		if(percentagem < 1.1f) {
			printf("\n 0%% dos cenarios\n" );
			printf("\nPorcentagem : %f%% \n", percentagem);
			break;
		}
		
		n++;
	}while(1);
	
	return 0;
}


