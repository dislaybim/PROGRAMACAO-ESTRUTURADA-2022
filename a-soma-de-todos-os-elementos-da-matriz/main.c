/*Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.*/

#include <stdio.h>

int main()
{
    int matriz[4][5],i,j, soma=0;
    
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("matriz[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("A soma é: %d", soma);

    return 0;
}
