#include <stdio.h>

int main()
{

  char nome[100];
  double salario_fixo, total_vendas, valor_comissao;

  scanf("%s", &nome);
  scanf("%lf", &salario_fixo);
  scanf("%lf", &total_vendas);

  valor_comissao = salario_fixo + ((15 * total_vendas) / 100);

  printf("TOTAL = R$ %.2lf\n", valor_comissao);

  return 0;
}