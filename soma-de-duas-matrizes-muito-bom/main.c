/*Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].*/

#include <stdio.h>

void soma(int A[2][2],int B[2][2]){
    int SOMA[2][2],i,j;
     printf("A soma da Matriz A e B: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        SOMA[i][j] = A[i][j] + B[i][j];
        printf("\nSOMA[%i][%i] = %d", i,j, SOMA[i][j]);
        }
    }

    
}

int main()
{
    int A[2][2], B[2][2], i, j, result;
    
    printf("digitar elementos da matriz A: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("A[%i][%i] = ", i,j);
        scanf("%i",&A[i][j]);
        }
    }
    
     printf("digitar elementos da matriz B: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("B[%i][%i] = ", i,j);
        scanf("%i",&B[i][j]);
        }
    }
    soma(A,B);
    return 0;
}
