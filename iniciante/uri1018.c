#include <stdio.h>

double nota(double dinheiro, int nota) {

  double qtd;

  qtd = dinheiro/nota;

  return qtd;
}

int main() {

  double dinheiro;
  scanf("%lf", &dinheiro);

  
  int arraySize = 6;
  int notas[] = {100, 50, 20, 10, 5, 2};
  double moedas[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
  int notas_[arraySize];
  int moedas_[arraySize];


  int help;

  int i;
  for (i = 0; i < arraySize; i++) {
    help = nota(dinheiro ,notas[i]);
    notas_[i] = help ;
    dinheiro -= help*notas[i];
  }

  int j;
  for (j = 0; j < arraySize; j++) {
    help = nota(dinheiro*100 ,moedas[j]*100);
    moedas_[j] = help ;
    dinheiro -= help*moedas[j];
  }

  printf("NOTAS:\n");
  for ( i = 0; i < arraySize; i++) {
    printf("%d nota(s) de R$ %d.00\n", notas_[i],notas[i]);
  }

  printf("MOEDAS:\n");
  for ( i = 0; i < arraySize; i++) {
    printf("%d moeda(s) de R$ %.2lf\n", moedas_[i], moedas[i]);
  }

  return 0;
}
