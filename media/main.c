#include <stdio.h>

//versão 1 
float calcularmedia1(float v[], int tam){
   int cont;
   float acumular = 0, media;
   
   for(cont=0;cont<tam;cont++){
       acumular = acumular + v[cont];
   }
   media = acumular/cont;
   return media;
} 

int main(){
    float vet[400];
    float media;
    int i;
    printf("digite 4 numeros: ");
    for(i=0; i<4; i++){
        scanf("%f", &vet[i]);
    }
    
     int tam = i;
        
     media = calcularmedia1(vet,tam);
        
    printf("Media: %.2f\n",media);
    return 0;
}