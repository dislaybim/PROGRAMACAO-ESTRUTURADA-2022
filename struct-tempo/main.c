/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os cam-
pos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de

cinco posições dessa estrutura e imprima a maior hora.*/

#include <stdio.h>

typedef struct{	
    int hora;	
    int minuto;	
    int segundos;
    }tempo;
    
void doideira(tempo tempo[5]){
    int i, hora = 0, minuto = 0, segundo = 0;
    
    for(i=0;i<5;i++){
        if(tempo[i].hora > hora || tempo[i].hora==hora && tempo[i].minuto>minuto || tempo[i].hora==hora && tempo[i].minuto==minuto && tempo[i].segundos>segundo){
            hora = tempo[i].hora;
            minuto = tempo[i].minuto;
            segundo = tempo[i].segundos;
        }
    }
    printf("\n %dhrs %dmin %ds",hora,minuto,segundo);
}

    
int main( ){	
    tempo tempo[5];
    int i;

    for(i=0; i<5; i++){	
        printf("AMOSTRAGEM %i\n", i+1);	
        printf("hora: ");	
        scanf("%d", &tempo[i].hora);	
        printf("minuto: ");	
        scanf("%d", &tempo[i].minuto);	
        printf("segundo: ");	
        scanf("%d", &tempo[i].segundos);	
        printf("\nHORARIO: %dhr %dmin %ds", tempo[i].hora,tempo[i].minuto,tempo[i].segundos);
        }
    doideira(tempo);
        return 0;
}