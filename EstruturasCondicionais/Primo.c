
#include <stdio.h>
#include <stdbool.h> // Necessário para usar o tipo booleano 'bool'
#include <math.h>    // Necessário para a função sqrt()

// Função para verificar se um número é primo
bool ehPrimo(int num)
{
    // Casos especiais: 0, 1 e números negativos não são primos
    if (num <= 1)
    {
        return false;
    }

    // O número 2 é o único primo par
    if (num == 2)
    {
        return true;
    }

    // Se o número for par e maior que 2, não é primo
    if (num % 2 == 0)
    {
        return false;
    }

    // Testa a divisibilidade por números ímpares de 3 até a raiz quadrada do número
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false; // Encontrou um divisor, não é primo
        }
    }

    return true; // Se nenhum divisor foi encontrado, é primo
}

int main()
{
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero))
    {
        printf("%d é um numero primo.\n", numero);
    }
    else
    {
        printf("%d não é um numero primo.\n", numero);
    }

    return 0;
}
