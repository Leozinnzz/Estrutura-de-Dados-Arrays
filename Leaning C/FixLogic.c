/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
	
	srand(time(NULL));
	
	int vet[N];	

	//preencher o vetor
	for(int i = 0; i <N; i++) { 
		vet[i] = rand() % 11;
	}
	
	printf("\nVETOR\n"); 
	for(int i = 0; i < N; i++) { 
		printf(" %d ", vet[i]);
	}
	
	printf("\n\n");
	
	int repetido;
	
	//verificar se ja repetiu 
	for(int i = 0; i < N; i++) { 
		repetido = 0;
		
		
		for(int j = 0; j < i; j++) { 
			if(vet[j] == vet[i]) { 
				repetido = 1; 
				break;
			}
		}
		
		if(repetido) 
			continue;
			
		//contar o tanto de vezes que aparece 
		int cont = 1;
		for(int j = i+1; j < N; j++) { 
			if(vet[j] == vet[i])
				cont++;
		}
		
		if(cont > 1) 
			printf("O numero %d repetiu %d vezes\n",vet[i], cont);
	}
	
	//ordernar o vetor
	int j, key;
	for(int i = 0; i < N; i++) { 
		key = vet[i]; 
		j = i - 1;
	
		while(j >= 0 && vet[j] > key) { 
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = key;
	}


	printf("\nVETOR ORDENADO\n");
	for(int i = 0; i < N; i++) { 
		printf(" %d ", vet[i]);
	}
	
	
	printf("\n\n");
	int num;
	printf("Qual o numero deja encontrar ? ");
	scanf("%d", &num);
	 
	//busca binaria
	int inicio = 0, meio, fim = N-1, encontrado = 0;
	while(inicio <= fim) { 
		meio = (inicio + fim) / 2;
		
		if(num == vet[meio]) { 
			encontrado = 1; 
			break;
		}
		
		else if(num > vet[meio]) {
			inicio = meio + 1;
		} else { 
			fim = meio - 1; 
		}
	
	}
	
	if(encontrado) 
		printf("O numero %d foi encontrado no vetor\n", num);
	else 
		printf("Numero nao encontrado");
	
    //the destroyer of codes
}


