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
    int resp;
    char cartao[17];
    int digito;
    

	
	do {
		
		printf("================ OPÇÕES ================\n");
		printf("1 - GERAR NÚMERO CARTÃO\n");
		printf("2 - VALIDAR NÚMERO CARTÃO\n");
		printf("0 - ENCERRAR PROGRAMA\n");
		
		printf("\nDIGITE A OPÇÃO DESEJADA: ");
		scanf(" %d", &resp);
		
		
		if(resp == 1){
			printf("\nCARTAO GERADO: \n");
			for(int i = 0; i < 16; i++) {
				cartao[i] =  '0' + rand() % 10;
			}
			printf("\n");
			
			int somaDig = 0;
			
			//validar cartao
			for(int i = 0; i < 15; i++) {
				digito = (cartao[i] - '0');
				
				if(i % 2 == 0) {
					digito *= 2;
					if(digito > 9) 
						digito -= 9; 
				} 
				somaDig += digito;
			} 
			cartao[15] = '0' + (10 - (somaDig % 10)) % 10;
			cartao[16] = '\0';
			
			printf("%s", cartao);
			
			somaDig += (cartao[15] - '0');
			
			printf("\n");
			
			if(somaDig % 10 == 0)
				printf("\nCARTAO VALIDO!\n");
			else 
				printf("\nCARTAO INVALIDO\n");
				
			printf("\n");
		}
		
		else if(resp == 2){
			
			printf("\nInforme o número do Cartão para validação: ");
			scanf(" %[^\n]s", cartao); 
			
			//verificar se tem letra
			int havL = 0;
			for(int i = 0; cartao[i] != '\0'; i++) {
				if(cartao[i] > '0' || cartao[i] < '9') {
					havL = 1;
					break; 
				}
			} 
			
			int lenth = 0;
			while(cartao[lenth] != '\0') 
				lenth++;
			
			if(lenth != 16)
				printf("\nNúmero de Cartão deve ter exatamente 16 caracteres\n");
			
			else { 
				if(!havL) {
					printf("\nNúmero de Cartão deve ter somente caracteres numéricos\n");
				}
				else {
					int somaDig = 0;
				
					//validar cartao
					for(int i = 0; i < 15; i++) {
						digito = (cartao[i] - '0');
				
						if(i % 2 == 0) {
							digito *= 2;
							if(digito > 9) 
								digito -= 9; 
						} 
						somaDig += digito;
					} 
					int expected = (10 - (somaDig % 10)) % 10;
		
					if((cartao[15] - '0') == expected)
						printf("\nCARTAO VALIDO!\n");
					else 
						printf("\nCARTAO INVALIDO!\n");
				}
				printf("\n");
			}
		}
		else if(resp == 3){
			printf("PROGRAMA ENCERRADO");
			break;
		}
		
		
	}while(1);

    
}


