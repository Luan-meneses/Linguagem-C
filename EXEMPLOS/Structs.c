#include <stdio.h>

// Retorna o maior valor entre três inteiros
int encontrar_maior(int a, int b, int c) {
    int maior = a;
    
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    
    return maior;
}

int main() {
    int x = 15, y = 23, z = 19;
    
    int resultado = encontrar_maior(x, y, z);
    
    printf("Maior valor: %d\n", resultado);
    
    return 0;
}