/*
2. Faça um programa em C que calcule a área de uma triângulo (a = base altura / 2). Considere base e altura número inteiros maior que 0 
*/
#include <stdio.h>

int main(){
  int base = 2;
  int altura = 3;

  int area = base * altura / 2;

  prinif("A area do triangulo é %i\n", area);

return 0;
}