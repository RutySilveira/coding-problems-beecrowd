#include <iostream> // Biblioteca para entrada e saída padrão
#include <iomanip>  // Biblioteca para manipular a formatação de saída (como casas decimais)

int main()
{
  int cod_funcionario, horas_trab; // Declaração de variáveis inteiras para o código e horas trabalhadas
  double valor_hr, salario_final;  // Variáveis para o valor da hora e o salário final

  // Entrada dos dados: código do funcionário, horas trabalhadas e valor por hora
  std::cin >> cod_funcionario;
  std::cin >> horas_trab;
  std::cin >> valor_hr;

  // Cálculo do salário final
  salario_final = horas_trab * valor_hr;

  // Exibição do código do funcionário
  std::cout << "NUMBER = " << cod_funcionario << std::endl;

  // Exibição do salário com 2 casas decimais, no formato exigido
  std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salario_final << std::endl;

  return 0; // Finaliza o programa com sucesso
}
