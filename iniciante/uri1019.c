#include <stdio.h>

int main() {

  int h,m,segundo;

  scanf("%d", &segundo);

  m = segundo/60;
  h = m/60;
  segundo = segundo%60;
  m = m%60;

  printf("%d:%d:%d\n", h,m,segundo);

    return 0;
}
