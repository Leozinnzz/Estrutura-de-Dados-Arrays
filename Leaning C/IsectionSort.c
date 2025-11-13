#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    
	
	int vet[SIZE];
	
	srand(time(NULL));
	
	//prencher os vetores com numeris aleatorios
	for(int i = 0; i < SIZE; i++) { 
		vet[i] = 1 + rand() % 10;
	} 
	
	//buble sort
	for(int i = 0; i < SIZE; i++) { 
		for(int j = 0; j < SIZE-i-1; j++) {
			if(vet[j] > vet[j+1]) { 
				int aux = vet[j];
				vet[j] = vet[j+1]; 
				vet[j+1] = aux;
			}
		}
	}
	
	printf("\nBUBLE SORT\n"); 
	for(int i = 0; i < SIZE; i++) {
		printf("[%d]", vet[i]);
	}
	
	//selection sort 
	for(int i = 0; i < SIZE; i++) { 
		int menor = i;
		for(int j = i+1; j < SIZE; j++) { 
			if(vet[j] < vet[menor]) { 
				menor = j;
			}
		}
		
		//troca 
		int aux = vet[i]; 
		vet[i] = vet[menor];
		vet[menor] = aux;
	}
	
	printf("\nSELECTION SORT\n");
	for(int i = 0; i < SIZE; i++) { 
		printf("[%d]", vet[i]);
	}
	
	
	//insection sort
	printf("\nINSECTION SORT\n");
	int key, j;
	for(int i = 0; i < SIZE; i++) { 
		key = vet[i];
		j = i - 1;
		
		while(j >= 0 && vet[j] > key) { 
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = key;
	}
	
	for(int i = 0; i < SIZE; i++) 
		printf("[%d]", vet[i]);
		
		
	//busca binaria 
	int num; 
	printf("\nescolha um numero desse vetor:  ");
	scanf("%d", &num);
	
	int meio, inicio = 0, fim = SIZE-1, encontrado = 0;
	
	int cont = 0;
	while(inicio <= fim) { 
		meio = (inicio + fim) / 2;
		
		if(vet[meio] == num) { 
			encontrado = 1;
			break;
		}
		else if(num > vet[meio]) {
			inicio = meio + 1;
		}
		else { 
			fim = meio - 1;
		}
		cont++;	
	}
	
	if(encontrado) 
		printf("O numero %d foi encontrado apos %d tentativas", num, cont);
	else 
		printf("Numero nao encontrado");

}


