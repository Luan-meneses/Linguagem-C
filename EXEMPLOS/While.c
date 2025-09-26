#include <stdio.h>

int main() {
    int contador = 1;
    int soma = 0;
    
    printf("Calculando a soma dos números de 1 a 10:\n");
    
    // Enquanto contador for menor ou igual a 10, executa o bloco
    while (contador <= 10) {
        printf("Adicionando %d à soma\n", contador);
        soma += contador; // acumula o valor do contador na soma
        contador++; // incrementa o contador para avançar o loop
    }
    
    printf("Soma total: %d\n", soma);
    return 0;
}