#include <stdio.h> // Biblioteca padrão para entrada e saída (ex: printf, scanf)
#include <math.h>  // Biblioteca matemática (necessária para usar a função pow)

int main()
{
  const double PI = 3.14159; // Define a constante PI com valor aproximado
  double raio, volume;       // Declara duas variáveis do tipo double: raio e volume

  scanf("%lf", &raio); // Lê o valor do raio fornecido pelo usuário

  // Calcula o volume da esfera usando a fórmula: (4/3) * π * raio³
  volume = (4 / 3.0) * PI * pow(raio, 3);

  // Imprime o volume da esfera com três casas decimais
  printf("VOLUME = %.3lf\n", volume);

  return 0; // Indica que o programa terminou com sucesso
}
