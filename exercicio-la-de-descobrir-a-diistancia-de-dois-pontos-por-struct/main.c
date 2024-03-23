/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância

dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
utilize a fórmula a seguir*/

#include <stdio.h>
#include <math.h>

struct coordenada{
	float x;
	float y;
	float d;
	float pow;
	float raiz;
	float soma;
};

int main(){
	struct coordenada A, B, distancia, x, y, soma;
	
	
	printf("digite a coordenada do ponto A: ");
	scanf("%f %f", &A.x, &B.y);
	printf("\ndigite a coordenada do ponto B: ");
	scanf("%f %f", &B.x, &B.y);
	
	x.pow = pow(B.x - A.x, 2);
	y.pow = pow(B.y - A.y, 2);
	soma.soma = x.pow + y.pow;
	distancia.d = sqrt(soma.soma);
	
	printf("a distancia do ponto A para o B: %.2f", distancia);	
}