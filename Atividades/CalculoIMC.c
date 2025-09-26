#include <stdio.h>

int main()
{
    float altura, peso, imc;
    float somaIMC = 0;
    int contador = 0;
    int opcao = 0;

    printf("========================================\n");
    printf("|      Bem-vindo ao calculo de IMC!    |\n");
    printf("========================================\n");

    do
    {
        /*usando do while para repetir o programa ate o usarario digitar a opcao de saida*/
        printf("========================================\n");
        printf("              MENU DE OPCOES            \n");
        printf("        1 - Calcular um Novo IMC        \n");
        printf("        2 - Encerrar o programa         \n");
        printf("========================================\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        /*aqui usa a resposta do usuario para decidir o que fazer*/
        switch (opcao)
        {
        case 1:
            printf("Insira sua altura (em metros): \n");
            scanf("%f", &altura);

            printf("Insira seu peso (em kg):\n");
            scanf("%f", &peso);

            /*calculo do IMC padrao para todos IMC*/
            imc = peso / (altura * altura);

            printf("Seu IMC é: %.2f\n", imc);
            /*todos os valores dos IMC sao somados aqui para entao dividir no final*/
            somaIMC += imc;
            /*capturando quantas vezes o usuario calculou o IMC,
            faco a media com a quantidade de vezes que ele acessou */
            contador++;

            break;

        case 2:
            printf("========================================\n");
            printf("        Programa encerrado.\n");
            printf("========================================\n");
            /*calculando a media dos usuarios */
            if (contador > 0)
            {
                float media = somaIMC / contador;
                printf("Voce calculou o IMC %d vezes.\n", contador);
                printf("A media dos IMCs foi: %.2f\n", media);
            }
            else
            {
                printf("Nenhum IMC foi calculado.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
            break;
        }
    } while (opcao != 2);

    return 0;
}