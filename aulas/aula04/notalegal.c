#include <stdio.h>

int main() {
  char nome [31];
  int quantidade;
  float valor;

  printf( "Entre com o nome do produto: ");
  scanf("%s", nome);
  

  printf(" Entre com a quantidade doproduto: ");
  scanf(" %d", &quantidade);

  printf("Entre com o valor do produto: ");
  scanf(" %f", &valor);

  printf("----------------------\n");
  printf("    NOTA LEGAL         \n");
  printf("------------------------\n");
  printf("ITEM            QTD VALOR\n");
  printf( "%-13s %03i %8.2f\n", nome, quantidade, valor);

  return 0;
}