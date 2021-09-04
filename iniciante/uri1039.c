#include <math.h>
#include <stdio.h>

int main()
{

  float n1, n2, n3, n4;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  float mediaP = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4)) / 10;
  printf("Media: %.1f\n", mediaP);

  if (mediaP >= 7.0)
  {
    printf("Aluno aprovado.\n");
  }
  else if (mediaP < 5.0)
  {
    printf("Aluno reprovado.\n");
  }
  else
  {
    printf("Aluno em exame.\n");
    scanf("%f", &n1);
    printf("Nota do exame: %.1f\n", n1);
    float mediaF = (mediaP + n1) / 2;
    if (mediaF >= 5)
    {
      printf("Aluno aprovado.\n");
    }
    else
    {
      printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1f\n", mediaF);
  }

  return 0;
}