# Lê um valor inteiro fornecido pelo usuário
valor = int(input())

# Calcula a quantidade de notas de 100 reais
notas_cem = valor // 100
# Calcula o restante após retirar as notas de 100
resto = valor % 100

# Calcula a quantidade de notas de 50 reais
notas_cinquenta = resto // 50
# Atualiza o restante após retirar as notas de 50
resto = resto % 50

# Calcula a quantidade de notas de 20 reais
notas_vinte = resto // 20
# Atualiza o restante após retirar as notas de 20
resto = resto % 20

# Calcula a quantidade de notas de 10 reais
notas_dez = resto // 10
# Atualiza o restante após retirar as notas de 10
resto = resto % 10

# Calcula a quantidade de notas de 5 reais
notas_cinco = resto // 5
# Atualiza o restante após retirar as notas de 5
resto = resto % 5

# Calcula a quantidade de notas de 2 reais
notas_dois = resto // 2
# O que sobrar são as notas de 1 real
notas_um = resto % 2

# Exibe o valor original
print(valor)

# Exibe a quantidade de cada nota necessária
print(f"{notas_cem} nota(s) de R$ 100,00")
print(f"{notas_cinquenta} nota(s) de R$ 50,00")
print(f"{notas_vinte} nota(s) de R$ 20,00")
print(f"{notas_dez} nota(s) de R$ 10,00")
print(f"{notas_cinco} nota(s) de R$ 5,00")
print(f"{notas_dois} nota(s) de R$ 2,00")
print(f"{notas_um} nota(s) de R$ 1,00")
