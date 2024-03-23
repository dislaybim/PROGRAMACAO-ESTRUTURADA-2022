/*Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações.*/
#include <stdio.h>

/*
int funcao(int v[],int n){
    int i;
    int *p;
    for(i=0;i<n;i++){
        printf("\nvetor %i: ",i+1);
        p = &v[i];
        scanf("%d", &v[i]);
        printf("\nposiçao: %d", p );
    }
    
    
}

int main()
{
    int num,i, resulta;
    
    printf("digite o numero: ");
    scanf("%d", &num);
    int v[num];
    
    resulta = funcao(v,num);
    

    return 0;
}*/

int funcao(int *vetor, int num, int tam){
    int i;
    int *pnum;
    for(i=0;i<tam;i++){
        pnum = &vetor[i];
        *pnum = num;
    }
    
}

void main(){
    int vetor[5], i, n, result;
    printf("adicione o numero: ");
    scanf("%i", &n);
    
    result = funcao(vetor, n, 5);
    
    for(i=0;i<5;i++){
        printf("\nvetor[%d] = %d", i, vetor[i]);
    }
}
