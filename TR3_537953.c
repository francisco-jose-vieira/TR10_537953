#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	
   	for (y = 0 ; y < 200; y++){
		x[y] = 0;
	}

    while (1){
		printf("Digite um numero entre 0 e 5000: ");
		scanf("%d", &z);

		if (z == -1) break;


		if (z>= 0 && z<= 5000){
			k = z / 32; // posição
			w = z % 32; // deslocamento
			x[k] = x[k] | (1 << w);
		
		}else{
			printf("Valor invalido\n");
		}
    
    }
	for (j = 0; j < 200; j++){
		for (i = 0; i < 32; i++){
			if ((x[j] >> i) & 1){
				i = (j * 32) + i;
				printf("%d\n", i);
			}
		}
	}
	   
   	//#########################
   
	return 0;  
}