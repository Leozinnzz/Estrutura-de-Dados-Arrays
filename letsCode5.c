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
    
	int m;
	int x, n;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite o tamanho da matriz N x M: ");
	scanf("%d %d", &n, &m);
	
	int mat[n][m];
	
	srand(time(NULL));
	
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < m; j++){
			mat[i][j] = 1 + rand() % x;
			printf("%d ", mat[i][j]); 
		}
		printf("\n");
	}

    //the destroyer of codes
}


