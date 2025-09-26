#include <stdio.h>

int main()
{
    int idade = 0;
    int contador = 0;

    do
    {
        /*Imprime algo na tela*/
        printf("Digite sua idade\n");
        /*entrada de Dados pelo usuario*/
        scanf("%d", &idade);
        printf("sua idade é. %d\n", idade);

        if (idade >= 18 && idade < 65)
        {
            printf("Voce é ADULTO. ACESSO NEGADO\n");
        }
        else
        {
            printf("ACESSO NEGADO, Menor de Idade\n");
        }

        contador++;

    } while (contador < 3);

    return 0;
}