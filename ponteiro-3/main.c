/*Crie um programa que contenha um vetor de inteiros com tamanho 5. Utilizando
apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o
dobro de cada valor lido.*/

#include <stdio.h>

void main(){
    int v[5], *pnum;
    int i;
    
    for(i=0;i<5;i++){
        pnum = &v[i];
        scanf("%d", pnum);
    }
     for(i=0;i<5;i++){
        printf("\nvetor v[%i] = %i", i,v[i]);
    }
    
    
}