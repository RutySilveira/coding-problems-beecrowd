#include <iostream>

int main()
{
  int a, b, c, d, diferenca; // Declara cinco variáveis inteiras

  std::cin >> a; // Lê o valor de 'a' do usuário
  std::cin >> b; // Lê o valor de 'b' do usuário
  std::cin >> c; // Lê o valor de 'c' do usuário
  std::cin >> d; // Lê o valor de 'd' do usuário

  // Calcula a diferença entre o produto de 'a' e 'b' e o produto de 'c' e 'd'
  diferenca = a * b - c * d;

  // Exibe o resultado no formato "DIFERENCA = valor"
  std::cout << "DIFERENCA = " << diferenca << std::endl;

  return 0; // Finaliza o programa indicando sucesso
}
