#include <math.h>
#include <stdio.h>

int main() {

    float valores[5] = {4.0,4.5,5.0,2.0,1.50};
    int cod, qtd;

    scanf("%d %d", &cod, &qtd);

    float total = valores[cod-1] * qtd;
    printf("Total: R$ %.2f\n", total);

  return 0;
}