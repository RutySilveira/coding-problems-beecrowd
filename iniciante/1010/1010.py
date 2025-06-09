# Lê os dados da primeira peça em uma única linha e separa em três variáveis
cod_1, n_pecas_1, valor_unitario_1 = input().split()
# Converte os dados lidos para os tipos adequados
cod_1 = int(cod_1)                 # Código da peça 1 (não é usado no cálculo)
n_pecas_1 = int(n_pecas_1)         # Quantidade da peça 1
valor_unitario_1 = float(valor_unitario_1)  # Valor unitário da peça 1

# Lê os dados da segunda peça
cod_2, n_pecas_2, valor_unitario_2 = input().split()
# Converte os dados lidos
cod_2 = int(cod_2)                 
n_pecas_2 = int(n_pecas_2)         
valor_unitario_2 = float(valor_unitario_2)

# Calcula o valor total a pagar pelas duas peças
total = (n_pecas_1 * valor_unitario_1) + (n_pecas_2 * valor_unitario_2)

# Exibe o resultado com duas casas decimais, no formato solicitado
print(f"VALOR A PAGAR: R$ {total:.2f}")
