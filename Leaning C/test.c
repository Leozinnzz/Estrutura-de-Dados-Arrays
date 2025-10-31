/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    
    //buble sort
    
    srand(time(NULL));
    
	int vet[10]; 
	int temp;
	
	int index = 10;
	
	//preencher numeros aleatorios
	for(int i = 0; i < index; i++) {
		vet[i] = 1 + rand() % 100;
	}
	
	//buble sort
	for(int i = 0; i < index; i++) {
		for(int j = 0; j < index - 1 - i; j++) { 
			if(vet[j] < vet[j+1]) {
				temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
			
		}
	}
	
	for(int i = 0; i < index; i++) { 
		printf("[%d]\n", vet[i]);
	}
 
    
    //the destroyer of codes
}


