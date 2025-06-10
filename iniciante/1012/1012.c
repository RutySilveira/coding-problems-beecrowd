#include <stdio.h> // Biblioteca padrão para funções de entrada e saída, como printf e scanf

int main()
{
  const double PI = 3.14159; // Define a constante PI com valor aproximado

  double a, b, c;                 // Declara três variáveis do tipo double para armazenar os valores de entrada
  scanf("%lf%lf%lf", &a, &b, &c); // Lê três valores do tipo double fornecidos pelo usuário

  // Calcula a área de um triângulo retângulo com base 'a' e altura 'c'
  double triangulo_ret = (a * c) / 2;

  // Calcula a área de um círculo com raio 'c'
  double circulo = PI * (c * c);

  // Calcula a área de um trapézio com bases 'a' e 'b' e altura 'c'
  double trapezio = ((a + b) * c) / 2;

  // Calcula a área de um quadrado com lado 'b'
  double quadrado = b * b;

  // Calcula a área de um retângulo com lados 'a' e 'b'
  double retangulo = a * b;

  // Imprime cada área calculada com três casas decimais de precisão
  printf("TRIANGULO: %.3lf\n", triangulo_ret);
  printf("CIRCULO: %.3lf\n", circulo);
  printf("TRAPEZIO: %.3lf\n", trapezio);
  printf("QUADRADO: %.3lf\n", quadrado);
  printf("RETANGULO: %.3lf\n", retangulo);

  return 0; // Finaliza o programa indicando que terminou com sucesso
}
