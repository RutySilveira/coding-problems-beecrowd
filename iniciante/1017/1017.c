#include <stdio.h> // Biblioteca padrão de entrada e saída

int main()
{
  int tempo_viagem, velocidade_media, distancia_percorrida; // Declara variáveis inteiras
  double qtd_litros;                                        // Declara variável do tipo double para armazenar a quantidade de litros com casas decimais

  scanf("%d", &tempo_viagem);     // Lê o tempo de viagem (em horas)
  scanf("%d", &velocidade_media); // Lê a velocidade média durante a viagem (em km/h)

  distancia_percorrida = tempo_viagem * velocidade_media; // Calcula a distância total percorrida
  qtd_litros = distancia_percorrida / 12.0;               // Calcula a quantidade de litros (12 km por litro)

  printf("%.3lf\n", qtd_litros); // Imprime a quantidade de litros com 3 casas decimais

  return 0; // Encerra a função main indicando execução bem-sucedida
}
