#include <stdio.h>

int main() {
    printf("Números pares de 1 a 20:\n");
    
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            continue; // pula o resto do loop para números ímpares
        }
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}