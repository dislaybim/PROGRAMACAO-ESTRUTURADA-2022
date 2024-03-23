/*Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.*/

#include <stdio.h>

int main()
{
    int matriz[10][10];
    int i, j;
    
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("matriz[%d][%d] = ",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
    
        for(i=0;i<10;i++){
            printf("\n");
            for(j=0;j<10;j++){
            printf("%d",matriz[i][j]);
            
        }
    }
    return 0;
}
