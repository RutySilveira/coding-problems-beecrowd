#include <stdio.h>

int main()
{
  // Declara e inicializa um vetor com os valores das notas disponíveis, em ordem decrescente
  int vetor[7] = {100, 50, 20, 10, 5, 2, 1};

  int valor, qtd_notas;

  // Calcula o tamanho do vetor dividindo o tamanho total da memória ocupada pelo vetor
  // pelo tamanho de um único elemento (int)
  int tamanho_vet = sizeof(vetor) / sizeof(int);

  // Lê o valor inteiro que será decomposto em notas
  scanf("%d", &valor);

  // Imprime o valor original
  printf("%d\n", valor);

  // Percorre cada valor de nota no vetor
  for (int i = 0; i < tamanho_vet; i++)
  {
    // Calcula quantas notas do valor atual cabem no valor restante
    qtd_notas = valor / vetor[i];

    // Imprime a quantidade de notas e o valor da nota
    printf("%d nota(s) de R$ %d,00\n", qtd_notas, vetor[i]);

    // Atualiza o valor, subtraindo o total já contabilizado com a nota atual
    valor = valor % vetor[i];
  }

  return 0;
}
