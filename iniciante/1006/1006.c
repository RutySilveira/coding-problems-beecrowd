// Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

int main()
{
  double a, b, c, media; // Declara variáveis do tipo double para armazenar as notas e a média

  // Lê o primeiro número decimal (double) digitado pelo usuário e armazena em 'a'
  scanf("%lf", &a);

  // Lê o segundo número decimal (double) digitado pelo usuário e armazena em 'b'
  scanf("%lf", &b);

  // Lê o terceiro número decimal (double) digitado pelo usuário e armazena em 'c'
  scanf("%lf", &c);

  // Calcula a média ponderada das três notas com pesos 2, 3 e 5
  media = ((a * 2) + (b * 3) + (c * 5)) / 10;

  // Exibe a média com uma casa decimal
  printf("MEDIA = %.1lf\n", media);

  return 0; // Indica que o programa terminou com sucesso
}
