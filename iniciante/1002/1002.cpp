// Inclui a biblioteca padrão de entrada e saída
#include <iostream>

// Inclui a biblioteca para manipular a formatação da saída (como casas decimais)
#include <iomanip>

int main() // Função principal do programa
{
  // Define uma constante PI com valor aproximado de π
  const double PI = 3.14159;

  // Declara duas variáveis do tipo double: 'raio' e 'area'
  double raio, area;

  // Lê o valor do raio fornecido pelo usuário
  std::cin >> raio;

  // Calcula a área do círculo usando a fórmula: área = π * raio²
  area = PI * raio * raio;

  // Imprime a área no formato "A=valor" com 4 casas decimais
  std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

  return 0; // Retorna 0 indicando que o programa terminou com sucesso
}
