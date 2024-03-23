//Escreva	 uma	 função	 potencia(base,	 expoente) que,	 quando	 chamada,	
//retorna	baseexpoente.	Por	exemplo,	potencia(3,	4)	deve	retornar	81.	Assuma	
//que	expoente	é um	inteiro	maior ou	igual	a	1.	

#include <stdio.h>
#include <math.h>

int potencia(int base, int expoente){
    int pot;
    pot = pow(base,expoente);
    return pot;
}

int main()
{
    int a, b, result;
    
    printf("digite a base e o expoente em sequencia:\n");
    scanf("%d%d", &a,&b);
    
    result = potencia(a,b);
    
    printf("o valor da potencia eh: %d\n", result);

    return 0;
}
