#include <stdio.h> // Biblioteca padrão de entrada e saída (ex: scanf, printf)

int main()
{
  int x;                  // Declara uma variável inteira para a distância percorrida (em km)
  float y, consumo_medio; // Declara duas variáveis float: y (combustível gasto em litros) e consumo_medio

  scanf("%d", &x); // Lê o valor inteiro da distância
  scanf("%f", &y); // Lê o valor real do combustível gasto

  consumo_medio = x / y; // Calcula o consumo médio (km por litro)

  printf("%.3f km/l\n", consumo_medio); // Exibe o resultado com 3 casas decimais, seguido de "km/l"

  return 0; // Indica que o programa terminou com sucesso
}
