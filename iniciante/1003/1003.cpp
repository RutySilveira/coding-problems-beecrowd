// Inclui a biblioteca padrão para entrada e saída
#include <iostream>

int main() // Função principal do programa
{
  int a, b, soma; // Declara três variáveis inteiras: a, b e soma

  std::cin >> a; // Lê o primeiro número inteiro digitado pelo usuário e armazena em 'a'
  std::cin >> b; // Lê o segundo número inteiro digitado pelo usuário e armazena em 'b'

  soma = a + b; // Calcula a soma de 'a' e 'b' e armazena em 'soma'

  // Exibe o resultado da soma no formato "SOMA = valor"
  std::cout << "SOMA = " << soma << std::endl;

  return 0; // Indica que o programa terminou com sucesso
}
