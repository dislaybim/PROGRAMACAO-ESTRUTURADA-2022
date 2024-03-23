#include <stdio.h>
#define TAM 12
int main(){
	float m[TAM][TAM];
	char op;
	int ind;
	int i,j;
	float soma;
	
	scanf("%d", &ind);
	scanf(" %c", &op);
	
	for(i=0; i<TAM; i++){// para cada linha
		for(j=0; j<TAM; j++){
			scanf("%f", &m[i][j]);
		}
	}
	soma = 0;
	for(i=0; i<TAM; i++){//para cada elemento da coluna de indice: ind
		soma = soma + m[i][ind];		
	}
	 
	if (op == 'M') 
		printf("%.1f\n", soma/TAM);
	else
	    printf("%.1f\n", soma);
	
	return 0;
}