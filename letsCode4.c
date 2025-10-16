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
    
	int vet[15];  
	int valido;

	srand(time(NULL));
	
	for(int i = 0; i < 15; i++) {
		do {
			vet[i] = 1 + rand() % 25; 
			valido = 0;
	
			//verificar se o numero e valido
			for(int j = 0; j < i; j++){
				if(vet[i] == vet[j]){
					valido = 1;
					break;
				}
			}
		}while(valido);
	}
	
	printf("15 numeros sorteados: \n"); 
	for(int i = 0; i < 15; i++) {
		printf("%d\n", vet[i]); 
	}
	
	//procurar os numeros que nao forem sorteados
	printf("Os 10 numeros nao sorteados: \n");
	for(int i = 1; i <= 25; i++){
		valido = 0; 
		for(int j = 0; j < 15; j++) {
			if(i == vet[j]) {
				valido = 1;
				break;
			}
		}
		if(!valido) 
			printf("%d\n", i);
	}
	
	
    //the destroyer of codes
}


