#include <stdio.h>  // Biblioteca padrão para entrada e saída (ex: printf, scanf)
#include <stdlib.h> // Biblioteca necessária para usar a função abs (valor absoluto)

int main()
{
  int a, b, c, maiorAB, maior; // Declara variáveis inteiras para os três números e para os maiores valores parciais

  scanf("%d%d%d", &a, &b, &c); // Lê três inteiros fornecidos pelo usuário

  // Calcula o maior valor entre 'a' e 'b' usando a fórmula: (a + b + |a - b|) / 2
  maiorAB = (a + b + abs(a - b)) / 2;

  // Calcula o maior valor entre 'maiorAB' e 'c' usando a mesma lógica
  maior = (maiorAB + c + abs(maiorAB - c)) / 2;

  // Imprime o maior valor entre os três no formato especificado
  printf("%d eh o maior\n", maior);

  return 0; // Indica que o programa terminou corretamente
}
