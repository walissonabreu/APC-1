/*
Faça um programa em C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP igual a 1,65%.
*/
#include <stdio.h>

int main() {
  float preco_inicial = 100.0f;
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_pasep = PIS_PASEP * preco_inicial;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  
  printf("Preco inicial = %f\n", preco_inicial);
  printf("Preco final = %f\n", valor_icms);
  printf("Preco final = %f\n", valor_confins);
  printf("Preco final = %f\n", valor_pis_pasep;)
  printf("Preco final = %\n", preco_final);
  
    return 0;
}