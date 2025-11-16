/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    
   srand(time(NULL));
   
   int vet[N];
   
   //vetor sem repetição
   int repetido;
   int num;
   for(int i = 0; i < N; i++) { 
	  do { 
		  repetido = 0;
		  num = 1 + rand() % 100;
		  
		  for(int j = 0; j < i; j++) { 
			  if(vet[j] == num) { 
				  repetido = 1;
				  break;
			  }
		  }
		  
	  }while(repetido);
	  
	  vet[i] = num;
	}
     
    //ordenar insection sort;
    int key, j;
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
    
    int n;
    printf("Qual numero que voce deseja buscar: ");
    scanf(" %d", &n);
    
	//binary search
	int cont = 1, inicio = 0, meio, fim = N-1, encontrado = 0;
	while(inicio <= fim) { 
		meio = (inicio + fim) / 2;
		
		if(n == vet[meio]) { 
			encontrado = 1;
			break;
		}
		else if(n > vet[meio]) { 
			inicio = meio + 1;
		} else { 
			fim = meio - 1;
		}
		
		cont++;
	}

	if(encontrado) 
		printf("\nNumero %d encontrado apos %d tentativas\n", n, cont);
	
    return 0;
}


