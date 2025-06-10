PI = 3.14159  # Define a constante PI com valor aproximado

raio = float(input())  # Lê o valor do raio digitado pelo usuário e converte para float

# Calcula o volume da esfera usando a fórmula: (4/3) * π * raio³
volume = 4/3 * PI * raio ** 3  

# Exibe o volume da esfera com três casas decimais, no formato especificado
print(f"VOLUME = {volume:.3f}")
