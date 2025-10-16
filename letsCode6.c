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
       

    int n; 
    
    
	printf("Digite um valor para a matriz: ");
	scanf("%d", &n);
	
	int mat[n][n]; 
	
	//craindo e somando a matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) {
			mat[i][j] = 1 + rand() % 9;
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < n; i++) {
		int somaM = 0;
	
		//soma das colunas
		for(int j = 0; j < n; j++){
			if(j != i) 
				somaM += mat[i][j]; 
		}
	
		//soma das linhas
		for(int j = 0; j < n; j++){
			if(j != i) 
				somaM += mat[j][i];	
		}
		mat[i][i] = somaM;
	}
	//encontrar a diagonal principal
	printf("\nDiagonal com a soma\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) {
				printf("%d ", mat[i][i]);
			}
			else
				printf("    ");
		}
		printf("\n");
	}   
    //the destroyer of codes
}


