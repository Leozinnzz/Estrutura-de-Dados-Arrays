/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   
	int n;
	int maior, menor;
	
	printf("Digite um numero: "); 
	scanf("%d", &n); 
	
	int flag = 1;
	
	if(n <= 1) {
		flag = 0;
		printf("\nO numero deve ser maior que 1 para ser primo\n");
	}
		
	else {
		//ultimo numero primo ate n
		for(int i = n - 1; i > 1; i--) {
			flag = 1;
			for(int j = 2; j <= n/2; j++) {
					if(i % j == 0)
						flag = 0;
			}
			 
			if(flag) {
				maior = i;
				break;
			} 
		}
		
		//primeiro numero primo posterior a n
		for(int i = n + 1; ; i++) { 
			flag = 1;
			for(int j = 2; j <= n/2; j++) { 
				if(i % j == 0) 
					flag = 0;
			}
			
			if(flag) { 
				menor = i;
				break;
			}
		}
		
		printf("O numero %d e o ultimo numero primo ate %d\n", maior, n);
		printf("O numero %d e o primeiro numero primo posterior a %d \n", menor, n);		
	}
    //the destroyer of codes
}


