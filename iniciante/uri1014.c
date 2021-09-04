#include <stdio.h>

int main() {

  int x;
  float y;

  scanf("%d", &x);
  scanf("%f", &y);

  double z = x/y;

  printf("%.3lf km/l\n", z);

  return 0;
}
