/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
   
   srand(time(NULL));
   
	int vet[SIZE];
	int cont;
	
	do {
		
		//preenchendo o vetor 
		int repetido;
		for(int i = 0; i < SIZE; i++) { 
			int num;
			do {
				repetido = 0;
				num = 10 + rand() % 50;
				
				for(int j = 0; j < SIZE; j++) { 
					if(vet[j] == num) { 
						repetido = 1;
						break;
					}
				}
			}while(repetido);
			
			vet[i] = num;
		}
		
		
		//ordenando o vetor
		int key, j; 
		for(int i = 1; i < SIZE; i++) { 
			key = vet[i];
			j = i - 1;
			
			while(j >= 0 && vet[j] > key) { 
				vet[j+1] = vet[j];
				j--;
			}
			vet[j+1] = key;
		}
		
		//mostrando o vetor
		for(int i = 0; i < SIZE; i++) { 
			printf("Vetor 0%d [%d]\n", i, vet[i]);
		}
		
		//busca binaria
		int n;
		printf("\nDigite um numero que deseja buscar: "); 
		scanf("%d", &n);
		int meio, inicio = 0, fim = SIZE-1, encontrado = 0;
		
		cont = 0;
		while(inicio <= fim) { 
			meio = (inicio + fim) / 2;
			
			if(vet[meio] == n ) { 
				encontrado = 1;
				break;
			}
			else if(n > vet[meio]) {
				inicio = meio + 1;
			}
			else {
				fim = meio - 1;
			}
			cont++;
		}
		
		if(encontrado) 
			printf("O numero %d foi encontrado apos %d buscas\n", n, cont); 
		else 
			printf("Numero nao encontrado");
		
		//finalizar
		int resp;
		printf("\nDeseja continuar Sim(1) Nao(0) "); 
		scanf("%d", &resp);
		
		system("clear");
		
		if(!resp)
			break;
		
	}while(1);	

    //the destroyer of codes
}


