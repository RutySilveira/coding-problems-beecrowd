#include <stdio.h>

int main()
{

  int cod_peca1, cod_peca2, n_pecas1, n_pecas2;
  double valor_peca1, valor_peca2, total;

  scanf("%d%d%lf", &cod_peca1, &n_pecas1, &valor_peca1);
  scanf("%d%d%lf", &cod_peca2, &n_pecas2, &valor_peca2);

  total = n_pecas1 * valor_peca1 + n_pecas2 * valor_peca2;

  printf("VALOR A PAGAR: R$ %.2lf\n", total);

  return 0;
}