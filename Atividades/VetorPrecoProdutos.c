#include <stdio.h>

int main()
{
    // Vetor com 10 preços
    float precos[10] = {12.50, 7.89, 20.99, 5.57, 15.9, 3.99, 18.70, 10.99, 22.35, 8.4};

    int i, j;
    float temp;

    printf("=====================================\n");
    printf("    Ordenacao Bubble Sort - Produtos \n");
    printf("=====================================\n\n");

    // Vetor original
    printf("Precos originais:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f R$ \n", precos[i]);
    }
    printf("\n\n");
    int troca = 1;

    // ORDENACAO CRESCENTE

    // O Bubble Sort compara elementos vizinhos e troca caso estejam fora da ordem.
    // Aqui, organizamos do menor para o maior.
        for (i = 0; i < 10 - 1; i++)
        { // número de passagens
            for (j = 0; j < 10 - 1 - i; j++)
            { // percorre o vetor
                if (precos[j] > precos[j + 1])
                {
                    // troca os valores
                    temp = precos[j];
                    precos[j] = precos[j + 1];
                    precos[j + 1] = temp;
                }
            }
        }

    // Exibindo em ordem crescente
    printf("Precos em ordem crescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f R$ \n", precos[i]);
    }
    printf("\n\n");

    // ORDENACAO DECRESCENTE

    //Bubble Sort com a condicao ao contrario
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            //Aqui inverte a condicao para sair em ordem decrescente
            if (precos[j] < precos[j + 1])
            {
                // troca os valores
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo em ordem decrescente
    printf("Precos em ordem decrescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f R$ \n", precos[i]);
    }
    printf("\n");

    return 0;
}
