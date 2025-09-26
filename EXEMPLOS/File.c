#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    
    // Abertura para escrita (cria ou sobrescreve)
    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para escrita!\n");
        return 1;
    }
    
    // Escrita no arquivo
    fprintf(arquivo, "Primeira linha do arquivo\n");
    fprintf(arquivo, "Segunda linha com número: %d\n", 42);
    
    // Fechamento obrigatório
    fclose(arquivo);
    
    // Abertura para leitura
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }
    
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("Lido: %s", linha);
    }
    
    fclose(arquivo);
    return 0;
}