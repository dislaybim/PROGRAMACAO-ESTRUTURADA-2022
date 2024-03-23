
#include <stdio.h>

int main()
{
    float temperatura[7], soma = 0.0, media;
    int i;
    
    
    printf("digite as temperaturas");
    
    for(i=0;i<7;i++){
       scanf("%f", &temperatura[i]);
       soma += temperatura[i];
       media = soma/7;
    }
    for(i=0;i<7;i++){
        printf("a temperatura de temperatura[%d] é %.2f°C",i, temperatura[i]);
    }
    printf("a media sera %.2f°C", media);

    return 0;
}
