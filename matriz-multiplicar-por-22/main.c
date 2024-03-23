/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.*/

#include <stdio.h>

int main()
{
    int matriz[3][3], i,j;
    
    printf("adicionar os elementos:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d \t",2*matriz[i][j]);
        }
    }
    return 0;
}
