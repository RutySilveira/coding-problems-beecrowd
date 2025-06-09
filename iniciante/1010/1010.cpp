#include <iostream>
#include <iomanip>

int main()
{
  int cod_peca1, cod_peca2, n_pecas1, n_pecas2;
  double valor_peca1, valor_peca2, total;

  std::cin >> cod_peca1 >> n_pecas1 >> valor_peca1;
  std::cin >> cod_peca2 >> n_pecas2 >> valor_peca2;

  total = n_pecas1 * valor_peca1 + n_pecas2 * valor_peca2;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "VALOR A PAGAR: R$ " << total << std::endl;

  return 0;
}
