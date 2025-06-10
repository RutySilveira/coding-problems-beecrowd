x = int(input())      # Lê um número inteiro representando a distância total percorrida (em km)
y = float(input())    # Lê um número real representando o total de combustível gasto (em litros)

# Calcula o consumo médio dividindo a distância pelo combustível gasto
consumo_medio = x / y

# Imprime o consumo médio com 3 casas decimais, seguido de "km/l"
print(f"{consumo_medio:.3f} km/l")
