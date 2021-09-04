#include <stdio.h>

int main() {

  int media, horas, distancia;
  float litros;

  scanf("%d", &horas);
  scanf("%d", &media);

  distancia = media * horas;
  litros = distancia/12.0;

  printf("%.3f\n", litros);

  return 0;
}
