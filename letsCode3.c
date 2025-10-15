/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	int n; 
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	srand(time(NULL));
		if(n%4 != 0) {
			printf("Esse numero nao é multiplo de 4");
		}
		
		
		int vet[n];  
		
		//ordem normal
		printf("Ordem normal \n");
		for(int i = 0; i < n; i++){
			vet[i] = 1 + rand() % 100; 
			printf("[%d] ", vet[i]);
		}
		
		//inverter os vetores
		printf("\nOrdem inversa: \n");
		for(int i = 0; i < n/2; i++){
			int aux = vet[i]; 
			vet[i] = vet[i + n/2]; 
			vet[i + n/2] = aux; 
		}
		
		for(int i = 0; i < n; i++) {
			printf("[%d] ", vet[i]);
		}
		
		//submetades
		for(int i = 0; i < n/4; i++){
			int aux = vet[i]; 
			vet[i] = vet[i + n/4]; 
			vet[i + n/4] = aux;
		}
		
		
		for(int i = n/2; i < n/2 + n/4; i++){
			int aux = vet[i];
			vet[i] = vet[i + n/4]; 
			vet[i + n/4] = aux;	
		}
		
		printf("\nSubmetades\n");
		for(int i = 0; i < n; i++) {
			printf("[%d] ", vet[i]);
		}
		
	
	
    //the destroyer of codes
}


