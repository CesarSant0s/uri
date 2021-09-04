#include <stdio.h>

int main() {
  int id_1, id_2;
  int qtd_1, qtd_2;
  float prc_1, prc_2;

  scanf("%d %d %f", &id_1, &qtd_1, &prc_1);
  scanf("%d %d %f", &id_2, &qtd_2, &prc_2);

  float total = (qtd_1*prc_1) + (qtd_2*prc_2);

  printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
