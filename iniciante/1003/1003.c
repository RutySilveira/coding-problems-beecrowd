// Inclui a biblioteca padrão para entrada e saída em C
#include <stdio.h>

int main() // Função principal do programa
{
  int a, b, soma; // Declara três variáveis inteiras: a, b e soma

  // Lê um número inteiro digitado pelo usuário e armazena em 'a'
  scanf("%d", &a);

  // Lê outro número inteiro digitado pelo usuário e armazena em 'b'
  scanf("%d", &b);

  // Calcula a soma de 'a' e 'b' e armazena o resultado em 'soma'
  soma = a + b;

  // Exibe o resultado da soma no formato "SOMA = valor"
  printf("SOMA = %d\n", soma);

  return 0; // Indica que o programa terminou com sucesso
}
