// Inclui a biblioteca padrão para entrada e saída
#include <iostream>

int main() // Função principal do programa
{
  int a, b, prod; // Declara três variáveis inteiras: a, b e prod

  std::cin >> a; // Lê o primeiro número inteiro digitado pelo usuário e armazena em 'a'
  std::cin >> b; // Lê o segundo número inteiro digitado pelo usuário e armazena em 'b'

  prod = a * b; // Calcula o produto de 'a' e 'b' e armazena em 'prod'

  // Exibe o resultado do produto no formato "PROD = valor"
  std::cout << "PROD = " << prod << std::endl;

  return 0; // Indica que o programa terminou com sucesso
}
