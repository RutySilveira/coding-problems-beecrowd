#include <stdio.h> // Biblioteca padrão para entrada e saída

int main()
{
  // Declara variáveis: código do funcionário, horas trabalhadas, valor por hora e salário final
  int cod_funcionario, horas_trab;
  double valor_hr, salario_final;

  // Lê o código do funcionário (inteiro)
  scanf("%d", &cod_funcionario);
  // Lê a quantidade de horas trabalhadas (inteiro)
  scanf("%d", &horas_trab);
  // Lê o valor da hora trabalhada (número real)
  scanf("%lf", &valor_hr);

  // Calcula o salário multiplicando as horas trabalhadas pelo valor da hora
  salario_final = horas_trab * valor_hr;

  // Imprime o número do funcionário
  printf("NUMBER = %d\n", cod_funcionario);
  // Imprime o salário com duas casas decimais
  printf("SALARY = U$ %.2lf\n", salario_final);

  return 0; // Indica que o programa terminou com sucesso
}
