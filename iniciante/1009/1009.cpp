#include <iostream> // Biblioteca para entrada e saída padrão
#include <iomanip>  // Biblioteca para manipular formatação de saída (como casas decimais)
#include <string>   // Biblioteca para usar strings

int main()
{
  // Declaração das variáveis:
  // nome: nome do vendedor
  // salario_fixo: salário base do vendedor
  // total_vendas: valor total das vendas efetuadas
  // valor_comissao: salário final com comissão
  std::string nome;
  double salario_fixo, total_vendas, valor_comissao;

  // Entrada de dados
  std::cin >> nome;         // Lê o nome do vendedor
  std::cin >> salario_fixo; // Lê o salário fixo
  std::cin >> total_vendas; // Lê o valor total das vendas

  // Cálculo do salário final com 15% de comissão sobre as vendas
  valor_comissao = salario_fixo + ((15 * total_vendas) / 100);

  // Configura a saída para exibir 2 casas decimais
  std::cout << std::fixed << std::setprecision(2);

  // Exibe o resultado
  std::cout << "TOTAL = R$ " << valor_comissao << std::endl;

  return 0; // Indica que o programa terminou com sucesso
}
