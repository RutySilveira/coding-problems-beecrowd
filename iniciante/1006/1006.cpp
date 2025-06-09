// Inclui biblioteca padrão para entrada e saída
#include <iostream>
// Inclui biblioteca para formatação da saída (como número de casas decimais)
#include <iomanip>

int main()
{
  double a, b, c, media; // Declara variáveis para as três notas e a média ponderada

  // Lê os três valores digitados pelo usuário e armazena em a, b e c
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;

  // Calcula a média ponderada com pesos 2, 3 e 5, divididos pela soma dos pesos (10)
  media = ((a * 2) + (b * 3) + (c * 5)) / 10;

  // Imprime a média com 1 casa decimal, no formato "MEDIA = valor"
  std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;

  return 0; // Finaliza o programa com sucesso
}
