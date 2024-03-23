/*Escreva um programa que solicite as notas de
quatro alunos ao usuário e apresente na tela a
menor e a maior nota. Esse programa deve possuir
um procedimento de cabeçalho e uma função para
verificar a menor e a maior nota dos alunos possuindo
um vetor de entrada NotAlunos[4]. */

#include <stdio.h>

void cabecalho(){
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-=-=-=-=BEM-VINDO!=-=-=-=-=-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}


float maiornotajoao(float joao[]){
    float maior = 0;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(joao[i]>maior){
            maior = joao[i];
        }
    }
    return maior;
}

float menornotajoao(float joao[]){
    float menor = 10;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(joao[i]<menor){
            menor = joao[i];
        }
    }
    return menor;
}

float maiornotalucas(float lucas[]){
    float maior = 0;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(lucas[i]>maior){
            maior = lucas[i];
        }
    }
    return maior;
    
}
float menornotalucas(float lucas[]){
    float menor = 10;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(lucas[i]<menor){
            menor = lucas[i];
        }
    }
    return menor;
}
float maiornotapedro(float pedro[]){
    float maior = 0;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(pedro[i]>maior){
            maior = pedro[i];
        }
    }
    return maior;
}
float menornotapedro(float pedro[]){
    float menor = 10;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(pedro[i]<menor){
            menor = pedro[i];
        }
    }
    return menor;
}
float maiornotapaulo(float paulo[]){
    float maior = 0;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(paulo[i]>maior){
            maior = paulo[i];
        }
    }
    return maior;
    
}
float menornotapaulo(float paulo[]){
    float menor = 10;
    int i;
    
    for(i = 0; i<4 ; i++){
        if(paulo[i]<menor){
            menor = paulo[i];
        }
    }
    return menor;
}

int main()
{
    cabecalho();
    int av = 4;
    float joao[av], lucas[av], pedro[av], paulo[av];
    int i;
    float maiorjoao, menorjoao;
    float maiorlucas, menorlucas;
    float maiorpedro, menorpedro;
    float maiorpaulo, menorpaulo;
    
    printf("digite as suas notas JOAO:\n");
    for(i=0;i<av;i++){
        printf("nota %i: ", i+1);
        scanf("%f", &joao[i]);
    }
    
    printf("digite as suas notas LUCAS:\n");
    for(i=0;i<av;i++){
        printf("nota %i: ", i+1);
        scanf("%f", &lucas[i]);
    }
    
    printf("digite as suas notas PEDRO:\n");
    for(i=0;i<av;i++){
        printf("nota %i: ", i+1);
        scanf("%f", &pedro[i]);
    }
    
    printf("digite as suas notas PAULO:\n");
    for(i=0;i<av;i++){
        printf("nota %i: ", i+1);
        scanf("%f", &paulo[i]);
    }
    
    maiorjoao = maiornotajoao(joao);
    menorjoao = menornotajoao(joao);
    maiorlucas = maiornotalucas(lucas);
    menorlucas = menornotalucas(lucas);
    maiorpedro = maiornotapedro(pedro);
    menorpedro = menornotapedro(pedro);
    maiorpaulo = maiornotapaulo(paulo);
    menorpaulo = menornotapaulo(paulo);
    
    printf("\nMaior nota do JOAO: %.2f", maiorjoao);
    printf("\nMenor nota do JOAO: %.2f", menorjoao);
    printf("\nMaior nota do LUCAS: %.2f", maiorlucas);
    printf("\nMenor nota do LUCAS: %.2f", menorlucas);
    printf("\nMaior nota do PEDRO: %.2f", maiorpedro);
    printf("\nMenor nota do PEDRO: %.2f", menorpedro);
    printf("\nMaior nota do PAULO: %.2f", maiorpaulo);
    printf("\nMenor nota do PAULO: %.2f", menorpaulo);

    return 0;
}

