#include <stdio.h>

int main()
{

  int cod_funcionario, horas_trab;
  double valor_hr, salario_final;

  scanf("%d", &cod_funcionario);
  scanf("%d", &horas_trab);
  scanf("%lf", &valor_hr);

  salario_final = horas_trab * valor_hr;

  printf("NUMBER = %d\n", cod_funcionario);
  printf("SALARY = U$ %.2lf\n", salario_final);

  return 0;
}