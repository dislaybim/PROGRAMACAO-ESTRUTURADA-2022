/*Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t
.

A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:*/

#include <stdio.h>
#define a 2
#define b 3

int main()
{
    int matriz[a][b];
    int t[b][a], i,j;
    
    printf("digite os 6 elementos da matriz: \n");
    for(i=0; i<a ; i++){
        for(j=0; j<b; j++){
            printf("matriz[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(i=0; i<a ; i++){
        printf("\n");
        for(j=0; j<b ; j++){
            printf("%d \t",matriz[i][j]);
            
        }
    }
    printf("\nmatriz transposta é: \n");
    for(i=0; i<a ; i++){
        for(j=0; j<b ; j++){
           t[j][i] = matriz[i][j];//para converter linha em coluna
        }
    }
    for(i=0; i<b ; i++){
        printf("\n");
        for(j=0; j<a ; j++){
            printf("%d \t", t[i][j]);//para imprimir a putaria;
        }
    }
    

    return 0;
}