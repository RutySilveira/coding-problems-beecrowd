#include <stdio.h> // Biblioteca padrão para entrada e saída

int main()
{
  // Declaração das variáveis:
  // cod_peca1, cod_peca2: códigos das peças
  // n_pecas1, n_pecas2: quantidades de cada peça
  // valor_peca1, valor_peca2: valores unitários
  // total: valor total da compra
  int cod_peca1, cod_peca2, n_pecas1, n_pecas2;
  double valor_peca1, valor_peca2, total;

  // Leitura dos dados da primeira peça:
  // código, quantidade e valor unitário
  scanf("%d%d%lf", &cod_peca1, &n_pecas1, &valor_peca1);

  // Leitura dos dados da segunda peça:
  // código, quantidade e valor unitário
  scanf("%d%d%lf", &cod_peca2, &n_pecas2, &valor_peca2);

  // Cálculo do valor total a pagar
  total = n_pecas1 * valor_peca1 + n_pecas2 * valor_peca2;

  // Impressão do valor total com 2 casas decimais
  printf("VALOR A PAGAR: R$ %.2lf\n", total);

  return 0; // Finaliza o programa
}
