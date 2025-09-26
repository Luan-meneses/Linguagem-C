#include <stdio.h>

// Par ou ímpar: Leia um número inteiro do usuário e imprima se ele é par ou ímpar.
int main()
{
    int n = 0;
    char opcao = 's';
    
    do
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        
        if (n % 2 == 0)
        {
            printf("Número é par\n");
        }
        else
        {
            printf("Número é ímpar\n");
        }

        printf("Quer continuar (s/n)? ");
        scanf(" %c", &opcao); // o espaço antes do %c ignora o ENTER

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
