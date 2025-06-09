# Lê um número decimal (float) do usuário e armazena na variável 'a'
a = float(input())

# Lê outro número decimal (float) do usuário e armazena na variável 'b'
b = float(input())

# Define os pesos das notas 'a' e 'b'
peso_a = 3.5
peso_b = 7.5

# Calcula a média ponderada considerando os pesos e as notas
media = ((peso_a * a) + (peso_b * b)) / (peso_a + peso_b)

# Imprime a média com 5 casas decimais, no formato "MEDIA = valor"
print(f"MEDIA = {media:.5f}")
