/*Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.*/

#include <stdio.h>

int main()
{
    int matriz[5][5],i,j;
    
    printf("adicionar todos os elementos: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("matriz[%d][%d] = ", i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((i+j) % 2 == 0){//verificar a condição a soma da coluna forma um numero par
                printf("\nmatriz[%d][%d] = %d", i,j,matriz[i][j]);
            }
        }
    }

    return 0;
}
