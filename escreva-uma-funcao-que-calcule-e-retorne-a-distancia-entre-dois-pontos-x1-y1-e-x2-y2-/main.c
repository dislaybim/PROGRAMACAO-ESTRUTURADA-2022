//Escreva	uma	função	que	calcule e	retorne a	distância	entre	dois	pontos	(	
//x1, y1)	e	 (x2, y2).	Todos	os números	e	 valores	de	 retorno	devem	ser	do	
//tipo	float.

#include <stdio.h>
#include <math.h>

int distancia(float x1, float y1, float x2, float y2){
    float negocio;
    float d;
    float x,y,f,g, z;
    
    
    x = x2 - x1;
    y = y2 - y1;
    f = x * x;
    g = y * y;
    z = x + y;
    
    d = sqrt(z);
    return d;
    
}

int main()
{
    float a,b,c,d, resultado;
    
    printf("adicione o x do vetor 1:\n");
    scanf("%f",&a);
    printf("adicione o y do vetor 1:\n");
    scanf("%f",&b);
    printf("adicione o x do vetor 2:\n");
    scanf("%f",&c);
    printf("adicione o y do vetor 2:\n");
    scanf("%f",&d);
    
    printf("temos os vetores:\n");
    printf("v1 = (%.2f, %.2f)\n v2 = (%.2f, %.2f\n", a,b,c,d);
    
    resultado = distancia(a,b,c,d);
    printf("a distancia dos dois pontos é %.2f u.d.\n",resultado);

    return 0;
}
