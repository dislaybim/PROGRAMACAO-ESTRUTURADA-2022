//Escreva um programa que solicite dois números ao
//usuário e apresente na tela o resultado da soma do
//módulo desses números. Esse programa deve possuir
//uma função para calcular o módulo.

#include <stdio.h>

float somadomodulo(float n1, float n2){
    float soma;
    soma = n1 + n2;
    return soma;
}

float modulo(float num){
    if(num<0){
        return -num;
    }
    else{
        return num;
    }
}

int main()
{
    printf("BEM-VINDO\n");
    float x, y;
    
    printf("digite os valores de x e y:\n");
    scanf("%f%f", &x,&y);
    
    x = modulo(x);
    y = modulo(y);
    
    
    printf("a soma dos modulos de %.2f e %.2f eh: %.2f\n", x,y,somadomodulo(x,y));

    return 0;
}
