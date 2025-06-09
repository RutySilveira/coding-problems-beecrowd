#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  std::string nome;
  double salario_fixo, total_vendas, valor_comissao;

  std::cin >> nome;
  std::cin >> salario_fixo;
  std::cin >> total_vendas;

  valor_comissao = salario_fixo + ((15 * total_vendas) / 100);

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "TOTAL = R$ " << valor_comissao << std::endl;

  return 0;
}
