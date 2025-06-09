// Inclui a biblioteca padrão para entrada e saída em C
#include <stdio.h>

int main() // Função principal do programa
{
  int a, b, prod; // Declara três variáveis inteiras: a, b e prod

  // Lê um número inteiro digitado pelo usuário e armazena em 'a'
  scanf("%d", &a);

  // Lê outro número inteiro digitado pelo usuário e armazena em 'b'
  scanf("%d", &b);

  // Calcula o produto de 'a' e 'b' e armazena o resultado em 'prod'
  prod = a * b;

  // Exibe o resultado do produto no formato "PROD = valor"
  printf("PROD = %d\n", prod);

  return 0; // Indica que o programa terminou com sucesso
}
