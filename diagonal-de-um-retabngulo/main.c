/*Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa
que declare e leia uma estrutura retângulo e exiba a área e o comprimento da
diagonal e o perímetro desse retângulo.*/
#include <stdio.h>
#include <math.h>

typedef struct retangulo{
	float x;
	float y;
}retangulo;

int main(){//usaremos como referencia o angulo de 30°
	retangulo A,B;
	float cos, sen;
	float distancia;
	float lado1, lado2, perimetro, area;
	
	printf("digite o ponto A: ");
	scanf("%f %f", &A.x, &A.y);
	printf("digite o ponto B: ");
	scanf("%f %f", &B.x, &B.y);
	
	distancia = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
	lado1 = B.x - A.x;
	if(lado1<0){
	    lado1 = -1 * lado1;
	}
	lado2 = B.y - A.y;
	if(lado2<0){
	    lado2 = -1 * lado2;
	}
	
	perimetro = 2*lado1 + 2*lado2;
	area = lado1 * lado2;
	
	
	printf("RETANGULO: \n");
	printf("lados: %.2f cm e %.2f cm", lado1,lado2);
	printf("\nperimetro: %.2f", perimetro);
	printf("\ndiagonal: %.2f", distancia);
	printf("\nArea: %.2f", area);
	return 0;	
}
