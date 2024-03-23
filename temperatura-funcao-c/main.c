//Escreva um programa que solicite a temperatura em
//Celsius ao usuário e apresente na tela o resultado da
//conversão dessa temperatura em Fahrenheit. Esse
//programa deve possuir uma função para converter a
//temperatura. Dados: Fahrenheit = Celsius x 1,8 + 32.

#include <stdio.h>

int fahrenheit(float temperatura){
    float conversao;
    
    conversao = (temperatura*1.8) + 32;
    return conversao;
}

int main (){
  printf("BEM-VINDO\n");
  float celsius, result;
  
  while(celsius != 11){
  printf("digite o valor da temperatura °C\n");
  scanf("%f",&celsius);
  result = fahrenheit(celsius);
  printf("a temperatura eh: %.2f °F\n", result);
  }

  return 0;
}
