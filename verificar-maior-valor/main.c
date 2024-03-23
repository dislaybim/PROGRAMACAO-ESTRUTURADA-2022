/*Escreva um programa para informar o maior
elemento de um vetor de 5 posições do tipo inteiro.
Esse programa deve possuir uma função para
verificar o maior número desse vetor.*/

#include <stdio.h>

int maiorelemento(int d[]){//função para calcular o maior elemento
    int maior = 0;
    int i;
    
    for(i=0;i<5;i++){
        
        if(d[i]>maior){
            maior = d[i];
        }
    }
    return maior;
}

int main()
{
    int vet[5], i, maior;
    
    for(i = 0; i < 5; i++){
        printf("digite o vetor[%i]: ", i);
        scanf("%i",&vet[i]);
    }
    
    maior = maiorelemento(vet);
    
    printf("o numero %d eh o maior!", maior);

    return 0;
}