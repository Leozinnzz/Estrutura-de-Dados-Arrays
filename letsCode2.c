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
    
	int vect[6] = {0}; 
	int n, i;
	float percent;

	
	printf("Quantas vezes vc quer jogar o dado: ");
	scanf("%d", &n);
	
	
	srand(time(NULL));
	for(i = 0; i < n; i++) {
		int valor = 1 + rand() % 6;
			
		vect[valor - 1]++;	
	}
	
	for(i = 0; i < 6; i++){
		 percent =   ((float) vect[i]  / n) * 100;
		 printf("Face %d: %d vezes %.2f%% \n", i + 1, vect[i], percent);
	}
	
	
	
	 
	

	
}


