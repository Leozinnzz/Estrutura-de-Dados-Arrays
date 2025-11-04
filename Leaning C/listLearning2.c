/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	
	int x, y;
	int repet;
	
	printf("Digite o tamanho do vetor (x): "); 
	scanf("%d", &x);
	
	printf("Digite o tamanho do vetor (y): ");
	scanf("%d", &y);
	
	int vet1[x];
	int vet2[y];
	
	printf("\nVETOR X\n");
	//preencher com numeros inteiros aleatorios vet1
	for(int i = 0; i < x; i++) {
		do { 
			
			repet = 0; 
			vet1[i] = rand() % (x+y);
			
			for(int j = 0; j < i; j++) { 
				if(vet1[i] == vet1[j]) {
					repet = 1; 
					break;
				}
			}
			
		}while(repet);
		printf("[%d]", vet1[i]);
	}
	
	printf("\nVETOR Y\n");
	//preencher com numeros inteiros aleatorios vet1
	for(int i = 0; i < y; i++) { 
		do { 
			
			repet = 0; 
			vet2[i] = rand() % (x+y);
			
			for(int j = 0; j < i; j++) { 
				if(vet2[i] == vet2[j]) {
					repet = 1; 
					break;
				}
			}
			
		}while(repet);
		printf("[%d]", vet2[i]);
	}
	
	int flag;
	//exclusivo vetor X; 
	printf("\nElementos exclusivos do vetor X: \n");
	for(int i = 0; i < x; i++) {
		flag = 1;
		for(int j = 0; j < x; j++) { 
			if(vet1[i] == vet2[j])
				flag = 0;
		}
		if(flag) 
			printf("[%d]", vet1[i]);
	}
	
	//exclusivo vetor Y
	printf("\nElementos exclusivos do vetor Y: \n");
	for(int i = 0; i < y; i++) { 
		flag = 1;
		for(int j = 0; j < y; j++) { 
			if(vet2[i] == vet1[j]) 
				flag = 0;
		}
		if(flag) 
			printf("[%d]", vet2[i]);
	}
	
	printf("\nOs numeros existentes nos dois vetores\n");
	for(int i = 0; i < x; i++) { 
		flag = 0;
		for(int j = 0; j < y; j++) { 
			if(vet1[i] == vet2[j])
				flag = 1;
		}
		if(flag)
			printf("[%d]", vet1[i]);
	}
	
}


