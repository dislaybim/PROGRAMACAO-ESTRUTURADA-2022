/*Faça um programa para obter os valores de uma
matriz 6x6 de números inteiros. Depois da leitura
dos dados, o programa deve calcular a soma dos
elementos da diagonal principal. Em seguida ele deve
mostrar os valores da matriz e o da soma.*/

#include <stdio.h>

int main()
{
    int matriz[6][6],i,j, soma = 0;
    
    printf("adicionar os valores: ");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&matriz[i][j]);
            if(i == j) soma += matriz[i][j];
        }
    }
    for(i=0;i<6;i++){
        printf("\n");
        for(j=0;j<6;j++){
            printf("%d \t",matriz[i][j]);
        }
    }
    printf("\nsoma da diagonal: %d", soma);
    return 0;
}
