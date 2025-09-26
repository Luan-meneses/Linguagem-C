#include <stdio.h>

int main() {
    int numeros[] = {2, 4, 6, 8, 10, 12};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 8;
    int encontrado = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == busca) {
            encontrado = 1;
            printf("Número %d encontrado na posição %d.\n", busca, i);
            break; // Sai do for assim que encontrar
        }
    }
    
    if (!encontrado) {
        printf("Número %d não encontrado.\n", busca);
    }
    
    return 0;
}