#include <stdio.h>

int main()
{
    int opcao = 0;
    int contador = 0;

    do
    {
        printf("CHECK O DIA DA SEMANA\n");
        printf("1 = DOMINGO\n");
        printf("2 = SEGUNDA FEIRA\n");
        printf("3 = TERCA FEIRA\n");
        printf("4 = QUARTA FEIRA\n");
        printf("5 = QUINTA FEIRA\n");
        printf("6 = SEXTA FEIRA\n");
        printf("7 = SABADO\n");
        printf("QUE DIA E HOJE ????????\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("DOMINGO\n");
            contador++;
            break;
        case 2:
            printf("SEGUNDA FEIRA\n");
            break;
        case 3:
            printf("TERCA FEIRA\n");
            break;
        case 4:
            printf("QUARTA FEIRA\n");
            break;
        case 5:
            printf("QUINTA FEIRA\n");
            break;
        case 6:
            printf("SEXTA FEIRA\n");
            break;
        case 7:
            printf("SABADO\n");
            break;

        default:
            printf("entrada Invalida");
            break;
        }
        contador++;
    } while (contador < 3);
    return 0;
}