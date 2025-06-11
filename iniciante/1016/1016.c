#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
  int y, distancia; // Declara duas variáveis inteiras: y (entrada do usuário) e distancia (resultado em minutos)

  scanf("%d", &y); // Lê um número inteiro digitado pelo usuário e armazena em y

  distancia = 2 * y; // Calcula o tempo necessário com base em 2 minutos por quilômetro

  printf("%d minutos\n", distancia); // Imprime o resultado formatado na tela, seguido da palavra "minutos"

  return 0; // Encerra a função main indicando que o programa foi executado com sucesso
}
