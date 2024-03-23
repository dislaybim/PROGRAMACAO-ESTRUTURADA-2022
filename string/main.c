
#include <stdio.h>

int main()
{
    float temperatura[7], soma=0, media;
    int i;
char dia[200]={"segunda", "terca", "quarta", "quinta", "sexta", "sabado", "domingo"};
    for (i=0; i < 7; i++){
        scanf("%f", &temperatura[i]);
        soma += temperatura[i];
        media = soma/7;
    }
    for (i=0; i < 7 ; i++){
        printf("%c fez %.2f°C\n",dia[i],temperatura[i]);
    }
    printf("\nmedia de temperatura é: %.2f°C\n", media);

    return 0;
}
