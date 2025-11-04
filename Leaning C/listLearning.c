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
    
	int x, n;
	
	
	printf("Digite a quantidade de numero: "); 
	scanf("%d", &n);
	
	printf("Digite o valor para o intervalo: "); 
	scanf("%d", &x);
	
	int vet[n]; 
	int dist = 0;
	
	for(int i = 0; i < n; i++) {
		vet[i] = rand() % x;
		printf("%d", vet[i]);
	}
	
	//buscar numeros distintos 
	for(int i = 0; i < n; i++) { 
		for(int j = 0; j < n - i; j++) {
			if(vet[i] != vet[j])
				dist++;
		}
	}
	
	
	
	
    //the destroyer of codes
}


