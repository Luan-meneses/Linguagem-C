#include <stdio.h>

int main()
{
    // Vetor com 10 preços de produtos (poderia ser digitado pelo usuário também)
    float precos[10] = {12.5, 7.8, 20.0, 5.5, 15.9, 3.2, 18.7, 10.0, 22.3, 8.4};
    int i, j;
    float temp;

    printf("=====================================\n");
    printf("    Ordenacao Bubble Sort - Produtos \n");
    printf("=====================================\n\n");

    // Exibindo os dados originais
    printf("Precos originais:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f  ", precos[i]);
    }
    printf("\n\n");

    // ========================
    // ORDENACAO CRESCENTE
    // ========================
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
        printf("%.2f  ", precos[i]);
    }
    printf("\n\n");

    // ========================
    // ORDENACAO DECRESCENTE
    // ========================
    // Repetimos o Bubble Sort, mas invertendo a condicao.
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
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
        printf("%.2f  ", precos[i]);
    }
    printf("\n");

    return 0;
}
