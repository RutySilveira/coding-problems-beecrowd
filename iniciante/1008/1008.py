# Lê o número do funcionário (inteiro)
num_funcionario = int(input())

# Lê a quantidade de horas trabalhadas (inteiro)
horas_trabalhadas = int(input())

# Lê o valor recebido por hora (número com casas decimais)
valor_hora = float(input())

# Calcula o salário multiplicando horas trabalhadas pelo valor da hora
salario = horas_trabalhadas * valor_hora

# Imprime o número do funcionário
print("NUMBER =", num_funcionario)

# Imprime o salário com 2 casas decimais, no formato exigido
print(f"SALARY = U$ {salario:.2f}")
