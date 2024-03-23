/*Desenvolva um programa para ler os dados de uma
matriz para armazenar três notas de dez alunos. Em
seguida apresente a menor nota da prova de cada
aluno. Desenvolva uma função para obter a menor
nota de cada aluno.*/

#include <stdio.h>

int main(){

    float notas[3][3], soma=0, media, menornota;  
    int i,j;
    
    printf("digitar a nota dos 3 alunos: \n");
    
    for(i=0;i<3;i++){
        printf("\nAluno %i:\n", i+1);
        for(j=0;j<3;j++){
            printf("nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
            media = soma/3;
            //quer que a gente der a menor nota.
            if(notas[i][j] < 10){
                menornota = notas[i][j];
            }
        }
        printf("a menor nota sera: %.2f", menornota);
        printf("\nmedia eh: %.2f", media);//a média coloca por baixo
        soma = 0; // zera a soma em baixo, pra ficar gostoso
    }
   
    return 0;
}
    
    
    