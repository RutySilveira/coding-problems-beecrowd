cod_1, n_pecas_1, valor_unitario_1 = input().split()
cod_1 = int(cod_1)
n_pecas_1 = int(n_pecas_1)
valor_unitario_1 = float(valor_unitario_1)

cod_2, n_pecas_2, valor_unitario_2 = input().split()
cod_2 = int(cod_2)
n_pecas_2 = int(n_pecas_2)
valor_unitario_2 = float(valor_unitario_2)


total = (n_pecas_1 * valor_unitario_1) + (n_pecas_2 * valor_unitario_2)

print(f"VALOR A PAGAR: R$ {total:.2f}")