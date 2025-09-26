#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcaoCategoria, opcaoItem;
    float total = 0.0;
    char continuar;

    printf("=====================================\n");
    printf("   Bem-vindo ao Cardápio Digital!\n");
    printf("   Monte seu pedido facilmente. \n");
    printf("=====================================\n");

    do {
        printf("\nEscolha uma categoria:\n");
        printf("1 - Pratos\n");
        printf("2 - Bebidas\n");
        printf("3 - Sobremesas\n");
        printf("4 - Finalizar pedido\n");
        printf("Digite a opção: ");
        scanf("%d", &opcaoCategoria);

        switch(opcaoCategoria) {
            case 1:
                printf("\n--- Pratos ---\n");
                printf("1 - Lasanha (R$ 25.00)\n");
                printf("2 - Frango Grelhado (R$ 20.00)\n");
                printf("3 - Pizza (R$ 30.00)\n");
                printf("Escolha: ");
                scanf("%d", &opcaoItem);

                if(opcaoItem == 1) total += 25.0;
                else if(opcaoItem == 2) total += 20.0;
                else if(opcaoItem == 3) total += 30.0;
                else printf("Opção inválida!\n");
                break;

            case 2:
                printf("\n--- Bebidas ---\n");
                printf("1 - Suco (R$ 8.00)\n");
                printf("2 - Refrigerante (R$ 6.00)\n");
                printf("3 - Água (R$ 4.00)\n");
                printf("Escolha: ");
                scanf("%d", &opcaoItem);

                if(opcaoItem == 1) total += 8.0;
                else if(opcaoItem == 2) total += 6.0;
                else if(opcaoItem == 3) total += 4.0;
                else printf("Opção inválida!\n");
                break;

            case 3:
                printf("\n--- Sobremesas ---\n");
                printf("1 - Pudim (R$ 10.00)\n");
                printf("2 - Sorvete (R$ 12.00)\n");
                printf("3 - Bolo de Chocolate (R$ 15.00)\n");
                printf("Escolha: ");
                scanf("%d", &opcaoItem);

                if(opcaoItem == 1) total += 10.0;
                else if(opcaoItem == 2) total += 12.0;
                else if(opcaoItem == 3) total += 15.0;
                else printf("Opção inválida!\n");
                break;

            case 4:
                printf("\nVocê escolheu finalizar o pedido.\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

        if(opcaoCategoria != 4) {
            printf("\nDeseja adicionar mais itens? (s/n): ");
            scanf(" %c", &continuar);
        } else {
            continuar = 'n';
        }

    } while(continuar == 's' || continuar == 'S');

    // Aplica desconto
    if(total >= 50) {
        printf("\nParabéns! Você ganhou 10%% de desconto.\n");
        total = total * 0.9;
    }

    printf("\n=====================================\n");
    printf("   Pedido finalizado!\n");
    printf("   Valor total: R$ %.2f\n", total);
    printf("   Obrigado pela preferência!\n");
    printf("=====================================\n");

    return 0;
}
