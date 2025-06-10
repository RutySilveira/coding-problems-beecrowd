# Lê três valores inteiros digitados em uma única linha, separados por espaço
a, b, c = map(int, input().split())

# Usa a fórmula para encontrar o maior entre 'a' e 'b'
# Fórmula: (a + b + |a - b|) // 2
maiorAB = (a + b + abs(a - b)) // 2

# Agora usa a mesma fórmula para encontrar o maior entre 'maiorAB' e 'c'
maior = (maiorAB + c + abs(maiorAB - c)) // 2

# Exibe o maior valor entre os três, no formato especificado
print(f"{maior} eh o maior")
