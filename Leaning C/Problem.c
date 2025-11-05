/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIMULACOES 100000

int main() {
    
    srand(time(NULL));
	int n; 
	int nRepet;
	
	do {
		nRepet = 0;
		
		printf("Digite um valor de N: ");
		scanf(" %d", &n);
		
		int vet[n];  
		
		int flag;
		for(int i = 0; i < SIMULACOES; i++) {
			flag = 1;
			for(int j = 0; j < n; j++) {
				vet[j] = rand() % (2*n+1);
			}
			for(int j = 0; j < n; j++) { 
				for(int k = j+1; k < n; k++) { 
					if(vet[j] == vet[k]) {
						flag = 0;
						break;
					}
				}
				if(!flag) 
					break;
			}
			
			if(flag)
				nRepet++;
		}
		
		printf("Percentual de sequencias sem numeros repetidos %f%% \n", ((float)nRepet / SIMULACOES) * 100);
		printf("[%d]\n", nRepet);
		
		
	}while(n > 0);
    //the destroyer of codes
}


