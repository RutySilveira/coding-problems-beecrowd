# Define a constante PI com valor aproximado de π
PI = 3.14159

# Lê o valor do raio do usuário e converte para float
raio = float(input())

# Calcula a área do círculo usando a fórmula: área = π * raio²
area = PI * raio ** 2

# Imprime a área formatada com 4 casas decimais, no formato "A=xxxx.xxxx"
print(f"A={area:.4f}")
