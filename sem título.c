/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("============================= Leozinzzz ==========================");
	
	int size = 10;
	int arr[size];
	
	for (int i = 0; i < size; i++)
		arr[i] = 2 + rand() % (10-2+1);
	
	int tamanho = size;
	while(tamanho > 0) {
		int  ultimo = arr[tamanho-1];
		
		int indice = 0;
		while(indice < tamanho) {
			int elemento = arr[indice];
			
			if (elemento == ultimo) {
				for (int i = 0; i < tamanho-1; i++) {
					arr[i] = arr[i + 1];
				}
				tamanho--;
				continue;
			}
			
			indice++;
		}
		
		if (tamanho >= 0) {
			for (int i = 0; i < tamanho; i++) {
				printf("[%d] ", arr[i]);
			}
		}
	}
	
    return 0;

    //the destroyer of codes
}


