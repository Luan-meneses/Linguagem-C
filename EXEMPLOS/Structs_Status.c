#include <stdio.h>

// Função que tenta dividir e retorna status
int dividir_seguro(float a, float b, float *resultado) {
    if (b == 0) {
        return 0; // Erro: divisão por zero
    }
    
    *resultado = a / b;
    return 1; // Sucesso
}

int main() {
    float resultado;
    
    if (dividir_seguro(5.0, 2.0, &resultado)) {
        printf("Resultado da divisão: %.2f\n", resultado);
    } else {
        printf("Erro: Divisão por zero!\n");
    }
    
    return 0;
}