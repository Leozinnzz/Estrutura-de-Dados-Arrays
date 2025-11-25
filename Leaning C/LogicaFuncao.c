/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
=========== Funções ===============
*/

#include <stdio.h>
#include <stdlib.h>


void interface() {
	printf("\n======= menu de operacoes =======\n");
	printf("0 - sair\n");
	printf("1 - soma\n");
	printf("2 - subtracao\n");
	printf("3 - multiplicacao\n");
	printf("4 - divisao\n");
	printf("5 - potenciacao\n");
}




//soma
int soma(int x, int y){
	return x + y;
}

//subtracao
int subtrair(int x, int y) {
	return x - y;
}


//multiplicacao
int multiplicar(int x, int y) {
	return x * y;
}

//divisao
float dividir(int x, int y) {
	return (float)x / y;
}

//potencia
int potencia(int x, int y){
	int result = 1;
	for(int i = 0; i < y; i++)  
		result *= x;
	return result;
}

int main() {
	int exit;
	int respI;
	float respF;
	int opc, n1, n2;
	do {
		exit = 0;
		interface();
		printf("\nEscolha uma opção: ");
		scanf("%d", &opc);
		
		switch(opc) {
			case 1 : 
				printf("Digite dois numeros para somar: \n");
				scanf("%d %d", &n1, &n2);
				respI = soma(n1, n2);
				printf("%d + %d = %d", n1, n2, respI);
				break;
			case 2: 
				printf("Digite dois numeros para subtrair: \n");
				scanf("%d %d", &n1, &n2);
				respI = subtrair(n1, n2);
				printf("%d - %d = %d ", n1, n2, respI);
				break;
			case 3: 
				printf("Digite dois numeros para multiplicar: \n");
				scanf("%d %d", &n1, &n2);
				respI = multiplicar(n1, n2);
				printf("%d x %d = %d ", n1, n2, respI);
				break;
			case 4: 
				printf("Digite dois numeros para a divisão: \n");
				scanf("%d %d", &n1, &n2);
				if(n2 == 0) {
					printf("Divisão por zero!"); 
				}
				else {
					respF = dividir(n1, n2);
					printf("%d / %d = %.2f ", n1, n2, respF);
				}
				break;
			case 5: 
				printf("Digite uma base: \n");
				scanf("%d", &n1);
				printf("Digite um expoente: \n");
				scanf("%d", &n2);
				respI = potencia(n1, n2);
				printf("Potencia %d elevado a %d = %d ", n1, n2, respI);
				break;
			case 0: 
				printf("Programa encerrado");
				exit = 1;
				break;
			default: 
				printf("Esse numero nem ta na lista kkkkkkkkkkkkk");
		}
	}while(!exit);
}

