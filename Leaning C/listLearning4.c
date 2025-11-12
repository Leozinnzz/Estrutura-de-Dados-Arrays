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
 
	srand(time(NULL));
	
    int n; 
    
    printf("Digite um valor: "); 
    scanf("%d", &n);
    
    
    int vet[n]; 
    
    //sortear os valores
    for(int i = 0; i < n; i++) { 
		vet[i] = rand() % n;
		printf("[%d]", vet[i]);
	}
	
    printf("\n");
   //h-idex
   for(int i = 0; i < n; i++) {
	   for(int j = i+1; j < n; j++)  {
			if(vet[i] < vet[j]) {
				int aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
	   }
	   printf("[%d]", vet[i]);
   }
   
    int hIdx = 0;
   //encontrando o h-Index
   for(int i = 0; i < n; i++) { 
		if(vet[i] >= i+1)
			hIdx = i+1;
		else 
			break;
   }
   
   printf("\n%d\n", hIdx);
   
   
    
    

    //the destroyer of codes
}


