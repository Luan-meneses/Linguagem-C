#include <stdio.h>

int main() {
    // Declaração e inicialização de um array (vetor) de inteiros
    int numeros[5] = {10, 20, 30, 40, 50};
    
    // Acesso aos elementos pelo índice
    printf("Primeiro elemento: %d\n", numeros[0]);
    printf("Último elemento: %d\n", numeros[4]);
    
    // Modificação de elementos
    numeros[2] = 35;
    
    // Iteração através do array
    for(int i = 0; i < 5; i++) {
        printf("Posição %d: %d\n", i, numeros[i]);
    }
    
    return 0;
}