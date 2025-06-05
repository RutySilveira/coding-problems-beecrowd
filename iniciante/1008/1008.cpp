#include <iostream>
#include <iomanip>

int main()
{
  int cod_funcionario, horas_trab;
  double valor_hr, salario_final;

  std::cin >> cod_funcionario;
  std::cin >> horas_trab;
  std::cin >> valor_hr;

  salario_final = horas_trab * valor_hr;

  std::cout << "NUMBER = " << cod_funcionario << std::endl;
  std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salario_final << std::endl;

  return 0;
}
