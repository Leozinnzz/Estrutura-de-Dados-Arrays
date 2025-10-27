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
    int esc;
    int dv1, dv2; 
    char cpf[12];

	
    
    do {
		
		printf("\n===============OPÇÕES=============\n");
		printf("1 - GERAR NUMERO CPF \n");
		printf("2 - VALIDAR CPF \n");
		printf("0- ENCERRAR PROGRAMA \n");
		
		printf("\nDIGITE A OPÇÃO DESEJADA: ");
		scanf(" %d", &esc);
	
		//gerar cpf
		if(esc == 1) {
			printf("\nCPF GERADO : ");
			for(int i = 0; i < 9; i++){
				cpf[i] = '0' + rand() % 10;
			}
			
			int soma1 = 0, soma2 = 0;
			
			//logica da validação
			for(int i = 0; i < 9; i++) {
				soma1 += (cpf[i] - '0') * (i+1); 
			} 
			dv1 = (soma1 % 11) > 9 ? 0 : soma1 % 11;
			cpf[9] = dv1 + '0';
		
			for(int i = 0; i < 10; i++) {
				soma2 += (cpf[i] - '0') * i;
			}	
			dv2 = (soma2 % 11) > 9 ? 0 : soma2 % 11;
			cpf[10] = '0' + dv2;
			
			
			printf("%s", cpf);
			printf("\n"); 
			 
			if((dv1 + '0') == cpf[9] && (dv2 + '0') == cpf[10]) 
				printf("\nCPF VÁLIDO:\n");
			
			printf("\n");
		
		  //validar o cpf
		} else if(esc == 2) {
			printf("\nInforme CPF para validação: ");
			scanf(" %s", cpf);
			
			//verificar se tem letra no digito
			int havL = 0;
			for(int i = 0; cpf[i] != '\0'; i++){ 
				if(cpf[i] < '0' || cpf[i] > '9') {
					havL = 1;
					break; 
				} 
			}
		
			if(havL) { 
				printf("\nNúmero de Cartão deve ter somente caracteres numéricos\n");
			} 
			else {
				int lenth = 0;
				while(cpf[lenth] != '\0') 
					lenth++;
				if(lenth != 11) {
					printf("CPF deve ter exatamente 11 caracteres"); 
				} 
				else {
					for(int i = 0; i < 11; i++) {
						int soma1 = 0, soma2 = 0;
						cpf[i] = (cpf[i] - '0');
			
						for(int i = 0; i < 9; i++) 
							soma1 += (cpf[i] - '0') * (i+1); 
						dv1 = (soma1 % 11) > 9 ? 0 : soma1 % 11;
						cpf[9] = dv1 + '0';
		 
						for(int i = 0; i < 10; i++) 
							soma2 += (cpf[i] - '0') * i;
						dv2 = (soma2 % 11) > 9 ? 0 : soma2 % 11;
						cpf[10] = '0' + dv2;
					}
			
					printf("\n");
			
					if(dv1 != (cpf[9] - '0'))
						printf("DV1 INCORRETO\n");
					else if(dv2 != (cpf[10] - '0')) 
						printf("DV2 incorreto!\n");
					else 
						printf("CPF VALIDO!\n");
				} 
			}
		}
				else if(esc == 0){
					printf("PROGRAMA ENCERRADO ");
					break;
				}
	}while(1);
    //the destroyer of codes
}


