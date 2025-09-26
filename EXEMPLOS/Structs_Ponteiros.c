#include <stdio.h>

// Calcula várias operações e retorna pelos ponteiros
void operacoes(int a, int b, int *soma, int *produto, int *diferenca) {
    *soma = a + b;
    *produto = a * b;
    *diferenca = a - b;
}

int main() {
    int x = 10, y = 4;
    int soma, produto, diferenca;
    
    operacoes(x, y, &soma, &produto, &diferenca);
    
    printf("Soma: %d\n", soma);
    printf("Produto: %d\n", produto);
    printf("Diferença: %d\n", diferenca);
    
    return 0;
}