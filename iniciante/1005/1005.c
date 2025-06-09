// Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

int main() // Função principal do programa
{
  double a, b, media; // Declara variáveis do tipo double para armazenar as notas e a média

  // Lê o primeiro número decimal (double) digitado pelo usuário e armazena em 'a'
  scanf("%lf", &a);

  // Lê o segundo número decimal (double) digitado pelo usuário e armazena em 'b'
  scanf("%lf", &b);

  // Calcula a média ponderada com pesos 3.5 para 'a' e 7.5 para 'b'
  media = ((a * 3.5) + (b * 7.5)) / 11;

  // Imprime a média com 5 casas decimais, no formato "MEDIA = valor"
  printf("MEDIA = %.5lf\n", media);

  return 0; // Indica que o programa terminou com sucesso
}
