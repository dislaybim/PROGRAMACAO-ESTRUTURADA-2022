#include <stdio.h>

int main() {
  int n,              /* numero de alunos na turma          */
      i,           
      aluno,          /* indica o aluno corrente            */
      pontos;         /* numero de pontos do aluno corrente */
  char gabarito[30],  /* gabarito da prova                  */
       resp[30];      /* respostas do aluno corrente        */
  
  printf("Digite o numero de alunos: ");
  scanf("%d", &n);
 
  printf("Digite o gabarito da prova: ");
  for (i = 0; i < 30; i++) 
    scanf(" %c", &gabarito[i]);  
  /* O espaco em branco antes do %c e' importante.
     Ele evita que o return digitado depois do n seja 
     interpretado como a primeira "letra" do gabarito */

  for (aluno = 1; aluno <= n; aluno++) {
    pontos = 0;
    printf("Digite as respostas do aluno %d: ", aluno);
    for (i = 0; i < 30; i++) {
      scanf(" %c", &resp[i]);  /* atencao para o espaco em branco */
      if (resp[i] == gabarito[i])
        pontos = pontos + 1;
    }
    printf("O aluno %d fez %d pontos\n", aluno, pontos);
  }

  return 0; 
}
