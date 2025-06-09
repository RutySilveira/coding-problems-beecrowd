#include <iostream> // Biblioteca para entrada e saída padrão (cin e cout)
#include <iomanip>  // Biblioteca para manipulação de formatação de saída (setprecision)

int main()
{
  // Declaração das variáveis:
  // cod_peca1, cod_peca2: códigos das duas peças
  // n_pecas1, n_pecas2: quantidades de cada peça
  // valor_peca1, valor_peca2: valor unitário de cada peça
  // total: valor total a ser pago
  int cod_peca1, cod_peca2, n_pecas1, n_pecas2;
  double valor_peca1, valor_peca2, total;

  // Leitura dos dados da primeira peça (código, quantidade e valor unitário)
  std::cin >> cod_peca1 >> n_pecas1 >> valor_peca1;

  // Leitura dos dados da segunda peça (código, quantidade e valor unitário)
  std::cin >> cod_peca2 >> n_pecas2 >> valor_peca2;

  // Cálculo do valor total: quantidade × valor unitário de cada peça
  total = n_pecas1 * valor_peca1 + n_pecas2 * valor_peca2;

  // Define a precisão da saída com 2 casas decimais
  std::cout << std::fixed << std::setprecision(2);

  // Exibe o valor total formatado
  std::cout << "VALOR A PAGAR: R$ " << total << std::endl;

  return 0; // Fim do programa
}
