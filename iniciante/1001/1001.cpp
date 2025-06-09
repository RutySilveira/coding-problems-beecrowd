// Inclui a biblioteca padrão de entrada e saída do C++
#include <iostream>

int main() // Função principal do programa
{
  // Declara três variáveis inteiras: a, b e x
  int a, b, x;

  // Lê um valor inteiro do usuário e armazena em 'a'
  std::cin >> a;

  // Lê outro valor inteiro e armazena em 'b'
  std::cin >> b;

  // Calcula a soma de 'a' e 'b' e armazena o resultado em 'x'
  x = a + b;

  // Imprime o resultado no formato "X = valor"
  std::cout << "X = " << x << std::endl;

  return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
