// Inclui a biblioteca padrão de entrada e saída em C
#include <stdio.h>

int main() // Função principal do programa
{
  // Define uma constante com o valor aproximado de π (pi)
  const double PI = 3.14159;

  // Declara duas variáveis do tipo double: 'raio' e 'area'
  double raio, area;

  // Lê o valor do raio fornecido pelo usuário
  scanf("%lf", &raio);

  // Calcula a área do círculo: área = π * raio²
  area = PI * raio * raio;

  // Imprime o resultado com 4 casas decimais no formato "A=xxxx.xxxx"
  printf("A=%.4lf\n", area);

  // Retorna 0 para indicar que o programa foi executado com sucesso
  return 0;
}
