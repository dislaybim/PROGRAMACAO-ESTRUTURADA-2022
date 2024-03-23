#include <stdio.h>
#define TAM 100

int especial(int num, int n, int mat[TAM][TAM]){
    int i, j;
    int cont;
    int a, b;
    int imenor;
    //verificar linhas
    for(i=0;i<n;i++){
        cont = 0;
        if(mat[i][j] == num){
            cont++;
        }
        for(j=0;j<n;j++){
        }
        if(cont > n){
            a = 1;
        }
        else{
            a = 0;
        }
    }
    for(i=0;i<n;i++){
        cont=0;
        if(mat[j][i] == num){
                cont++;
            }
        for(j=0;j<n;j++){
        }
        if(cont > n){
            b = 1;
        }
        else{
            b = 0;
        }
    }
        
     if(a == 1 && b == 1){ 
         return 1;
    }else{
        
     return 0;
    }
    
}
int main(){
    int m[TAM][TAM];
    int n; //ordem da matriz
    int x; //numero escolhido pelo usuário
    int res; //armazenará 1 se a matriz for especial e 0, caso contrário
    int i,j;
    printf("Digite um valor: ");
    scanf("%d", &x);
    do{
        printf("Digite a ordem da matriz[2 a %d]:", TAM);
        scanf("%d", &n);
    }while (n<2 || n>TAM);
    printf("Digite os valores da matriz %dx%d:\n", n, n);
   for (i=0; i<n; i++)
       for(j=0; j<n; j++)
            scanf("%d", &m[i][j]);
    res = especial(x,n,m);
    if (res == 1){ 
        printf("Matriz especial\n");
    }else{
        printf("Nao eh matriz especial\n");
    }
    return 0;
}



