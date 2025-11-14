/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  SIZE 9
 
int main() {
    
    srand(time(NULL));
    int cartas[SIZE];
    int idc;
    int iFinal = 0;
    
    //preencher o vetor de cartas
    printf("Cartas recebidas: ");
		for(int i = 0; i < SIZE; i++) { 
		cartas[i] = 1 + rand() % 13;
		printf(" [%02d]", cartas[i]);
	}
	
	int contT = 0;
	
    do {
		
		printf("\n");	
	
		int key, j;
		for(int i = iFinal; i < SIZE; i++) {
			key = cartas[i];
			j = i - 1;
		
			while(j >= 0 && cartas[j] > key) { 
				cartas[j+1] = cartas[j];
				j--;
			}
		
			cartas[j+1] = key;
		}
	
		printf("\nCartas ordenadas ");
		for(int i = 0; i < SIZE; i++) { 
			if(!cartas[i])
				continue;
			printf(" [%02d]", cartas[i]);
		}
		
		printf("\n");
		//logica da trinca
		int cont = 0;
		for(int i = iFinal; i < SIZE; i++) { 
			if(cartas[i] == cartas[i+1] && cartas[i] == cartas[i+2]) { 
				cont++;
				contT++;
				printf("\n<<< Trinca formada com >>> [%02d] [%02d] [%02d]  \n", cartas[i], cartas[i+1], cartas[i+2]);
				iFinal += 3;
				cartas[i] = cartas[i+1] = cartas[i+2] = 0; 
			}
			
			if(cartas[i] + 1 == cartas[i+1] && cartas[i+1] + 1 == cartas[i+2]) { 
				cont++;
				contT++;
				printf("\n<<< Trinca formada com >>> [%02d] [%02d] [%02d]  \n", cartas[i], cartas[i+1], cartas[i+2]);
				iFinal += 3;
				cartas[i] = cartas[i+1] = cartas[i+2] = 0; 
			}
			
		}
		
		if(contT >= 3) { 
			printf("\nPARABENS!\n");
			break;
		}
		
		if(cont)
			continue;

		
		//busca binaria
		int cart;
		int meio, inicio = 0, fim = SIZE-1, encontrado = 0;
		printf("\n"); 
		printf("\nEscolha uma cartas para substuir ");
		scanf("%d", &cart);
		
		if(cart < 1 || cart > 13) { 
			printf("Carta Inválida. Tente novamente...");
			continue;
		}
		
		//realizando a busca
		while(inicio <= fim) {
			meio = (inicio + fim) / 2;
			if(cartas[meio] == cart) { 
				encontrado = 1;
				idc = meio;
				break;
			}
			else if(cart > cartas[meio]) {
				inicio = meio + 1;
			}
			else  {
				fim = meio - 1;
			}
		}
		
		if(!encontrado) { 
			printf("Você não possui essa carta. Tente novamente...");
			continue;
		}
		
		//troca
		cartas[idc] = 1 + rand() % 13;
		printf("\nCarta %d substituida pela carta %d \n", cart, cartas[idc]);
			
		
	}while(1);

	
	
    

    //the destroyer of codes
}


