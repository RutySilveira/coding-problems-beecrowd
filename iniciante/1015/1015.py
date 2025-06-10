import math  # Importa o módulo math, necessário para usar a função sqrt (raiz quadrada)

# Lê dois números reais (float) representando as coordenadas x1 e y1
x1, y1 = map(float, input().split())

# Lê dois números reais (float) representando as coordenadas x2 e y2
x2, y2 = map(float, input().split())

# Calcula a distância entre os dois pontos usando a fórmula da distância Euclidiana:
# distância = √[(x2 - x1)² + (y2 - y1)²]
distancia = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

# Imprime a distância com 4 casas decimais
print(f"{distancia:.4f}")
