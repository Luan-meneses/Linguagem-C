#include <stdio.h>

int main() {
    // Matriz 3x3 representando um tabuleiro
    int tabuleiro[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Acesso e modificação de elementos
    printf("Elemento na posição [1][1]: %d\n", tabuleiro[1][1]);
    tabuleiro[0][0] = 0;
    
    // Percorrendo toda a matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}