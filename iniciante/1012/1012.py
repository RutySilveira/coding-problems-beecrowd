PI = 3.14159  # Define a constante PI com valor aproximado

# Lê três números de uma única linha, separados por espaço, e os converte para float
a, b, c = map(float, input().split())

# Calcula a área de um triângulo retângulo com base 'a' e altura 'c'
triangulo_ret = (a * c) / 2

# Calcula a área de um círculo de raio 'c'
circulo = PI * (c ** 2)

# Calcula a área de um trapézio com bases 'a' e 'b' e altura 'c'
trapezio = ((a + b) * c) / 2

# Calcula a área de um quadrado de lado 'b'
quadrado = b * b

# Calcula a área de um retângulo com lados 'a' e 'b'
retangulo = a * b

# Imprime os resultados formatados com três casas decimais
print(f"TRIANGULO: {triangulo_ret:.3f}")
print(f"CIRCULO: {circulo:.3f}")
print(f"TRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}")
print(f"RETANGULO: {retangulo:.3f}")
