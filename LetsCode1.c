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
    
    int x;
    int repet = 0;
    int vect[100];
    
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	do {
		srand(time(NULL));
		for(int i = 0; i < 100; i++) {
			vect[i] =  1 + rand() % 20;
			if(vect[i] == x) {
				repet++; 
				printf("*");
		}
		printf("%d\n", vect[i]);
	}
	
	printf("Valor %d foi foi repetido %d vezes\n", x, repet);
	
	printf("Digite outro valor x: ");
	scanf("%d", &x);
	
	if(x <= 0)
		break;
	
	}while(1);
	
	
}


