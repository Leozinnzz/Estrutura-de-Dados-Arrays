/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
int main() {
    
	int vet[SIZE];
	
	srand(time(NULL));
	
	//alimentando o vetor
	//printf("\nvalores\n");
	for(int i = 0; i < SIZE; i++) { 
		vet[i] = 12 + rand() % 80;
		//printf("[%d]", vet[i]);
	}
	
	int soma = 0;
	float media;
	int maior, menor, contD = 0;
	for(int i = 0; i < SIZE; i++) { 
		if(!i) maior = menor = vet[i];
		soma += vet[i];
		for(int j = 0; j < SIZE; j++) { 
			if(vet[j] > maior) maior = vet[j];
			if(vet[j] < menor) menor = vet[j];
			
		}
		contD++;
	}
	
	int qtd = 0;
	media = (float) soma / contD;
	//quantidade de dias apos a media
	for(int i = 0; i < SIZE; i++) { 
		if(vet[i] > media)
			qtd++;
	}
	
	printf("\n%d foi a maior umidade relativa no dia %d \n", maior, contD);
	printf("media mensal %.2f ", media);
	printf("\nQuantidade de dias acima da media %d \n", qtd);
	

    //the destroyer of codes
}


