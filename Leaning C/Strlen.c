/*
============= Leozinzz =================
============= CachyOS --%d/%m/%Y-- =================
============= LI4ever ======================
============= Made-by-Leozinzz-Desktop ===============
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char email[50];
    int cont = 0;
    int point = 0;
    int haveP;
    
    printf("Digite um email: ");
    scanf("%s", email);
  
 
    int lenth = strlen(email);
    
   //verificar se contem arroba
   for(int i = 0; i < lenth; i++) {
		if(email[i] == '@') {
			cont = 1; 
			point = i;
		}
		
		
		if(cont && email[i] == '.' && i > point + 1)
			haveP = 1;
   }
   
	if(cont && haveP && point > 0 && email[lenth - 1] != '.') 
		printf("Email válido! ");
	else 
		printf("Email invalido");
}


