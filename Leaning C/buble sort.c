/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LENTH 10

int main() {
   
	
    srand(time(NULL));
    int vet[LENTH];
    
	printf("\nVETOR DESORDENADO\n");
	for(int i = 0; i < LENTH; i++) {
		vet[i] = rand() % 10;
		printf("[%d]", vet[i]);
	}


	//buble sort
	for(int i = 0; i < LENTH - 1; i++) { 
		for(int j = 0; j < LENTH - 1 - i; j++) {
			if(vet[j] > vet[j+1]) {
				int temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
	
	printf("\nVETOR ORDENADO\n");
	for(int i = 0; i < LENTH; i++) {
		printf("[%d]", vet[i]);
	}
	
    //the destroyer of codes
}


