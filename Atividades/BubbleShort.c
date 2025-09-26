#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, temp;
    int vetor[10] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45};
    

    printf("=====================================\n");
    printf("    Ordenacao Bubble Sort - Numeros \n");
    printf("=====================================\n\n");

    // Exibindo os dados originais
    printf("Vetor original:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", vetor[i]);
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
            if (vetor[j] > vetor[j + 1])
            {
                // troca os valores
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibindo em ordem crescente
    printf("Vetor em ordem crescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", vetor[i]);
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
            if (vetor[j] < vetor[j + 1])
            {
                // troca os valores
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibindo em ordem decrescente
    printf("Vetor em ordem decrescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", vetor[i]);
    }
    printf("\n\n");
    return 0;
}