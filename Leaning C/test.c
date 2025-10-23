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
    int vet[10] = {0}; 
    
    int size = 10;
    
    for(int i = 0; i < size; i++){
		vet[i] = i+1;
		printf("[%d] ", vet[i]);
	}
	
	printf("\n");
	
	for(int i = 0; i < size; i++){
		printf("[%d] ", i);
	}
  
	//invertendo o vetor
	for(int i = 0; i < size/2; i++){
		int temp = vet[i];
		vet[i] = vet[size - 1 - i];
		vet[size - 1 - i] = temp;  // (7 6 5 4 3 2 1)
	}
	
	printf("\n");
	
	printf("\nVetor invertido \n");
	for(int i = 0; i < size; i++) {
		printf("[%d] ", vet[i]);
	}
   
	printf("\n");
	
    for(int i = 0; i < size; i++){
		printf("[%d] ", i);
	}
 
    
    //the destroyer of codes
}


