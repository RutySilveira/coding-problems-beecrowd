// Inclui a biblioteca padrão de entrada e saída em C
#include <stdio.h>

int main() // Função principal do programa
{
  // Declara três variáveis inteiras: a, b e x
  int a, b, x;

  // Lê um valor inteiro do usuário e armazena em 'a'
  scanf("%d", &a);

  // Lê outro valor inteiro do usuário e armazena em 'b'
  scanf("%d", &b);

  // Soma os valores de 'a' e 'b' e armazena o resultado em 'x'
  x = a + b;

  // Imprime o resultado da soma no formato "X = valor"
  printf("X = %d\n", x);

  // Retorna 0 indicando que o programa terminou com sucesso
  return 0;
}
