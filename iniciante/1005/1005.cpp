// Inclui a biblioteca padrão para entrada e saída
#include <iostream>

// Inclui a biblioteca para manipulação da formatação da saída (ex: casas decimais)
#include <iomanip>

int main() // Função principal do programa
{
  double a, b, media; // Declara três variáveis do tipo double: a, b e media

  // Lê o primeiro valor do usuário e armazena em 'a'
  std::cin >> a;

  // Lê o segundo valor do usuário e armazena em 'b'
  std::cin >> b;

  // Calcula a média ponderada com pesos 3.5 para 'a' e 7.5 para 'b', totalizando 11
  media = ((a * 3.5) + (b * 7.5)) / 11;

  // Imprime o resultado com 5 casas decimais, no formato "MEDIA = valor"
  std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;

  return 0; // Indica que o programa terminou com sucesso
}
