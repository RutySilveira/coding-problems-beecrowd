# Lê o nome do vendedor (não é utilizado no cálculo, mas é parte da entrada)
vendedor = input()

# Lê o salário fixo do vendedor (número com ponto flutuante)
salario_fixo = float(input())

# Lê o valor total de vendas feitas pelo vendedor
total_vendas_em_dinheiro = float(input())

# Calcula 15% de comissão sobre o total de vendas
comissao = (15 * total_vendas_em_dinheiro) / 100

# Soma o salário fixo com a comissão
salario_final = salario_fixo + comissao

# Exibe o resultado com duas casas decimais, no formato exigido
print(f"TOTAL = R$ {salario_final:.2f}")
