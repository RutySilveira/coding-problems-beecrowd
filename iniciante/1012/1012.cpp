#include <iostream> // Biblioteca padrão para entrada e saída de dados (cin, cout)
#include <iomanip>  // Biblioteca para manipular a formatação da saída (ex: setprecision)

int main()
{
  const double PI = 3.14159; // Define uma constante PI com valor fixo, usada para calcular a área do círculo

  double a, b, c;          // Declaração das três variáveis do tipo double para entrada
  std::cin >> a >> b >> c; // Lê os valores de a, b e c a partir da entrada padrão (normalmente o teclado)

  // Cálculo da área do triângulo retângulo: base 'a' e altura 'c'
  double triangulo_ret = (a * c) / 2;

  // Cálculo da área do círculo de raio 'c'
  double circulo = PI * (c * c);

  // Cálculo da área do trapézio com bases 'a' e 'b', e altura 'c'
  double trapezio = ((a + b) * c) / 2;

  // Cálculo da área do quadrado com lado 'b'
  double quadrado = b * b;

  // Cálculo da área do retângulo com lados 'a' e 'b'
  double retangulo = a * b;

  // Define que todas as saídas terão 3 casas decimais e serão formatadas com ponto fixo
  std::cout << std::fixed << std::setprecision(3);

  // Impressão das áreas calculadas, cada uma com seu respectivo rótulo
  std::cout << "TRIANGULO " << triangulo_ret << std::endl;
  std::cout << "CIRCULO " << circulo << std::endl;
  std::cout << "TRAPEZIO " << trapezio << std::endl;
  std::cout << "QUADRADO " << quadrado << std::endl;
  std::cout << "RETANGULO " << retangulo << std::endl;

  return 0; // Encerra o programa
}
