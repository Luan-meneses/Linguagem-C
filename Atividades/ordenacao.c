#include <stdio.h>
#include <stdlib.h>

// Função para alocar e copiar um subarray
int* copiarArray(int arr[], int inicio, int fim) {
    int tamanho = fim - inicio;
    int* novo = (int*)malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        novo[i] = arr[inicio + i];
    }
    return novo;
}

// Função recursiva do Quick Sort (versão didática)
void quickSortRecursivo(int arr[], int n, int resultado[]) {
    if (n <= 1) {
        for (int i = 0; i < n; i++) {
            resultado[i] = arr[i];
        }
        return;
    }
    
    int pivot = arr[n / 2];  // Escolhe elemento do meio como pivô
    int esquerda[n], meio[n], direita[n];
    int tam_esq = 0, tam_meio = 0, tam_dir = 0;
    
    // Particiona o array
    for (int i = 0; i < n; i++) {
        if (arr[i] < pivot) {
            esquerda[tam_esq++] = arr[i];
        } else if (arr[i] == pivot) {
            meio[tam_meio++] = arr[i];
        } else {
            direita[tam_dir++] = arr[i];
        }
    }
    
    // Arrays temporários para resultados da recursão
    int* esq_ordenada = (int*)malloc(tam_esq * sizeof(int));
    int* dir_ordenada = (int*)malloc(tam_dir * sizeof(int));
    
    // Chamadas recursivas
    if (tam_esq > 0) quickSortRecursivo(esquerda, tam_esq, esq_ordenada);
    if (tam_dir > 0) quickSortRecursivo(direita, tam_dir, dir_ordenada);
    
    // Combina os resultados
    int pos = 0;
    for (int i = 0; i < tam_esq; i++) resultado[pos++] = esq_ordenada[i];
    for (int i = 0; i < tam_meio; i++) resultado[pos++] = meio[i];
    for (int i = 0; i < tam_dir; i++) resultado[pos++] = dir_ordenada[i];
    
    // Libera memória
    free(esq_ordenada);
    free(dir_ordenada);
}

// Função wrapper para facilitar o uso
void quickSort(int arr[], int n) {
    int* temp = (int*)malloc(n * sizeof(int));
    quickSortRecursivo(arr, n, temp);
    
    // Copia resultado de volta para o array original
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    free(temp);
}

// Exemplo de uso
int main() {
    int numeros[] = {3, 6, 8, 10, 1, 2, 1};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    
    printf("Array original: ");
    for (int i = 0; i < n; i++) printf("%d ", numeros[i]);
    printf("\n");
    
    quickSort(numeros, n);
    
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", numeros[i]);
    printf("\n");
    
    return 0;
}