/*Escreva um programa para informar o maior
elemento de um vetor de 5 posições do tipo inteiro.
Esse programa deve possuir uma função para
verificar o maior número desse vetor.*/

#include <stdio.h>

int maiorelemento(int vetor[5]){//função para calcular o maior elemento
        int v[5] = {1,3,4,5,6};
        int i;
        int s[5];
        
        for(i = 0; i<5 ; i++){
           s[i] = vetor[i] + v[i];
        }
        return s[i];
}

int main()
{
    int vet[5], i, maior;
    
    for(i = 0; i < 5; i++){
        printf("digite o vetor[%i]: ", i);
        scanf("%i",&vet[i]);
    }
    
    maior = maiorelemento(vet[i]);
    
    for(i = 0; i<5 ; i++){
        printf("s[%i] = %d\n",i,maior);
    }

    return 0;
}
