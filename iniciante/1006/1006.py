# Lê um número decimal do usuário e armazena na variável 'a'
a = float(input())

# Lê outro número decimal do usuário e armazena na variável 'b'
b = float(input())

# Lê mais um número decimal do usuário e armazena na variável 'c'
c = float(input())

# Define os pesos correspondentes para as notas a, b e c
peso_a = 2
peso_b = 3
peso_c = 5

# Calcula a média ponderada considerando os pesos e as notas
media = (((peso_a * a) + (peso_b * b) + (peso_c * c)) / (peso_a + peso_b + peso_c))

# Imprime a média com 1 casa decimal no formato "MEDIA = valor"
print(f"MEDIA = {media:.1f}")
