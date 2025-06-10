#include <stdio.h> // Biblioteca padrão para entrada e saída (scanf, printf)
#include <math.h>  // Biblioteca matemática para funções como sqrt e pow

int main()
{
  float x1, x2, y1, y2, distancia; // Declara as variáveis para coordenadas e distância

  // Lê as coordenadas do primeiro ponto (x1, y1)
  scanf("%f%f", &x1, &y1);

  // Lê as coordenadas do segundo ponto (x2, y2)
  scanf("%f%f", &x2, &y2);

  // Calcula a distância entre os dois pontos usando a fórmula da distância euclidiana
  // sqrt((x2 - x1)^2 + (y2 - y1)^2)
  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  // Imprime a distância com quatro casas decimais
  printf("%.4f\n", distancia);

  return 0; // Finaliza o programa com sucesso
}
