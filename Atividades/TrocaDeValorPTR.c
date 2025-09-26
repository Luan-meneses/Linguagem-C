#include <stdio.h>

// Função que troca valores usando ponteiros
void trocar_valores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função que calcula múltiplos resultados
void calcular_operacoes(int a, int b, int *soma, int *produto, int *diferenca) {
    *soma = a + b;
    *produto = a * b;
    *diferenca = a - b;
}

int main() {
    // Exemplo de troca de valores
    int x = 10, y = 20;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    trocar_valores(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    
    // Exemplo de múltiplos retornos
    int num1 = 15, num2 = 3;
    int soma, produto, diferenca;
    calcular_operacoes(num1, num2, &soma, &produto, &diferenca);
    printf("Soma: %d, Produto: %d, Diferença: %d\n", soma, produto, diferenca);
    
    return 0;
}