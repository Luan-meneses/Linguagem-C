
#include <stdio.h>

// Protótipos das funções
int calcular_fatorial(int n);
float calcular_media(int n1, int n2, int n3);
void exibir_resultado(float media);

int main()
{
    int numero = 5;
    float media;

    // Chamando função que retorna fatorial
    int fat = calcular_fatorial(numero);
    printf("Fatorial de %d = %d\n", numero, fat);

    // Chamando função que retorna média
    media = calcular_media(80, 90, 70);

    // Chamando função void (sem retorno)
    exibir_resultado(media);

    return 0;
}

// Função para calcular fatorial (sem recursão)
int calcular_fatorial(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular a média de 3 números
float calcular_media(int n1, int n2, int n3)
{
    return (n1 + n2 + n3) / 3.0;
}

// Função void para exibir resultado baseado na média
void exibir_resultado(float media)
{
    printf("Média: %.2f\n", media);
    if (media >= 70)
    {
        printf("Status: Aprovado\n");
    }
    else
    {
        printf("Status: Reprovado\n");
    }
}
