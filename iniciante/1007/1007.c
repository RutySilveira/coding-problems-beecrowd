// Inclui a biblioteca padrão para entrada e saída
#include <stdio.h>

int main()
{
  int a, b, c, d, diferenca; // Declara variáveis inteiras para os valores e o resultado

  // Lê quatro inteiros do usuário e armazena nas variáveis a, b, c e d
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  // Calcula a diferença entre o produto de a e b e o produto de c e d
  diferenca = a * b - c * d;

  // Imprime o resultado formatado
  printf("DIFERENCA = %d\n", diferenca);

  return 0; // Indica que o programa terminou com sucesso
}
