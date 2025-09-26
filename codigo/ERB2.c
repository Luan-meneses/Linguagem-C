#include <stdio.h>

int main()
{

    int idade = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Sua idade é: %d\n", idade);

        if (idade < 18)
        {
            printf("Você é menor de idade. ACESSO NEGADO\n");
        }
        else
        {
            printf("Acesso permitido. Seja bem-vindo!\n");
            break;
        }
    }

    return 0;
}