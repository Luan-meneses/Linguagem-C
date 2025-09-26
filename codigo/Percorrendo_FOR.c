#include <stdio.h>

int main()
{
    int almoco[7];   
    int i, soma = 0;
    float media;

    // Entrada de dados
    for (i = 0; i < 7; i++)
    {
        printf("Digite o numero de almocos servidos no dia %d: ", i + 1);
        scanf("%d", &almoco[i]);
        soma += almoco[i]; // acumula os valores
    }

    // Calcula a média semanal
    media = soma / 7.0;

    // Exibe relatório
    printf("\nRelatorio de almocos da semana:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Dia %d -> %d almocos\n", i + 1, almoco[i]);
    }

    printf("\nMedia semanal de almocos: %.2f\n", media);

    return 0;
}
