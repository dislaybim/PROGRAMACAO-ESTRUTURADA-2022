//questao 01 da prova de programação:

#include <stdio.h>
#define tam 300

typedef struct {
    char nome[15];//nome do eletrodomestico
    float potencia;//potencia do eletrodomestico
    float tempo;//tempo de consumo ao dia em horas
}eletronica;

int main(){
    eletronica eletrodomesticos[tam];
    int i;
    float consumototal=0;
    float consumo = 0;
    float consumodoeletro[tam];
    float consumorelativo[tam];
    int dias;
    
    printf("digite a quantidade de dias: ");
    scanf("%d", &dias);
    printf("\n");
    for(i=0;i<tam;i++){
        printf("nome do eletrodomestico: ");
        scanf("%s",eletrodomesticos[i].nome);
        printf("potencia(W): ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("tempo(hrs): ");
        scanf("%f", &eletrodomesticos[i].tempo);
        consumo += (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo);
        consumototal = consumo * dias;
    }
    printf("consumo total = %.2f\n", consumototal);
    for(i=0; i<tam ; i++){
        consumodoeletro[i] = eletrodomesticos[i].potencia * eletrodomesticos[i].tempo;
        consumorelativo[i] = ((dias * consumodoeletro[i])/consumototal)*100;
        printf("consumo relativo %s: %.2f %%\n", eletrodomesticos[i].nome,consumorelativo[i]);
    }
    return 0;
}
