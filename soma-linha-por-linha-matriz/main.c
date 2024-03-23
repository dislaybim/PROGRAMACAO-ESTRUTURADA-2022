/*Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída.*/

#include <stdio.h>

int main()
{
    int matriz[3][5];
    int somacoluna[5], i, j;

    for(i=0; i<5; i++)
      somacoluna[i] = 0;
    
    printf("digite os termos da matriz: \n");
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("digite o elemento matriz[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<5; i++){
      for(j=0; j<3; j++){
        somacoluna[i] += matriz[j][i];
        }
    }
    printf("os elementos da nova matriz da soma das colunas sera?\n");
    
    for(i=0; i<5; i++){
        printf("%d \t",somacoluna[i]);
    }

    return 0;
}