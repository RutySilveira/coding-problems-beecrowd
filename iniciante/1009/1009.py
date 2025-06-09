vendedor = input()
salario_fixo = float(input())
total_vendas_em_dinheiro = float(input())

comissao = (15 * total_vendas_em_dinheiro) / 100
salario_final = salario_fixo + comissao

print(f"TOTAL = R$ {salario_final:.2f}")