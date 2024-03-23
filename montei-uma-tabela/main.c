/*Desenvolva um programa que possua uma matriz
notaprova para armazenar quatro notas de cinco
alunos e depois apresentem na tela essas notas.
Esse programa dever possui validação de dados de
entrada. Utilizar duas estruturas de repetição uma
para manusear a coluna da matriz e outra para
manusear as linhas. O resultado do programa deve
ser conforme as figuras a seguir, a primeira figura
representa a obtenção dos dados e a segunda à
apresentação dos dados na tela.*/

#include <stdio.h>

void print(float notas[5][4]){
    int i,j;
    char nomes[100] = {'A', 'B', 'C', 'D', 'E', '\0'};
    
    
    for(i=0;i<5;i++){
        printf("\n|  %c  ", nomes[i]);
        for(j=0;j<4;j++){
            printf("| %.2f |", notas[i][j]);
        }
        
    }
    
    
}

int main()
{
   float notas[5][4];
   int i,j;
   
   printf("digite as notas: \n");
   for(i=0;i<5;i++){
       printf("notas do aluno %d: \n", i+1);
       for(j=0;j<4;j++){
           printf("nota %d: ",j+1);
           scanf("%f",&notas[i][j]);
           if(notas[i][j] > 10 || notas[i][j] < 0){
               printf("NOTA INVALIDA!\ndigite novamente a nota %d: ",j+1);
               while(notas[i][j] > 10 || notas[i][j] < 0){
                   scanf("%f",&notas[i][j]);
                   printf("NOTA INVALIDA!\ndigite novamente a nota %d: ",j+1);
               }
           }
       }
   }
   print(notas);
   return 0;
}