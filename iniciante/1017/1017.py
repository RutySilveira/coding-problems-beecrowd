# Lê o tempo da viagem em horas (inteiro)
tempo_viagem = int(input())

# Lê a velocidade média durante a viagem em km/h (inteiro)
velocidade_media = int(input())

# Calcula a distância percorrida multiplicando o tempo pela velocidade
distancia_percorrida = tempo_viagem * velocidade_media

# Considerando que o carro faz 12 km por litro, calcula a quantidade de litros necessária
qtd_litros = distancia_percorrida / 12

# Imprime o resultado com 3 casas decimais, representando os litros de combustível gastos
print(f"{qtd_litros:.3f}")
