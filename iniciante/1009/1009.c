#include <stdio.h> // Biblioteca padrão para entrada e saída

int main()
{
  // Declaração das variáveis:
  // nome: armazena o nome do vendedor (até 99 caracteres + '\0')
  // salario_fixo: o salário base do vendedor
  // total_vendas: o valor total das vendas realizadas
  // valor_comissao: o salário final incluindo a comissão
  char nome[100];
  double salario_fixo, total_vendas, valor_comissao;

  // Lê o nome do vendedor (sem espaços)
  scanf("%s", nome);

  // Lê o salário fixo do vendedor
  scanf("%lf", &salario_fixo);

  // Lê o valor total das vendas realizadas
  scanf("%lf", &total_vendas);

  // Calcula o salário final somando 15% do total das vendas ao salário fixo
  valor_comissao = salario_fixo + ((15 * total_vendas) / 100);

  // Exibe o salário final formatado com 2 casas decimais
  printf("TOTAL = R$ %.2lf\n", valor_comissao);

  return 0; // Indica que o programa terminou com sucesso
}
