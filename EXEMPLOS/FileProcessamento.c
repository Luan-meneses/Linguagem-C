#include <stdio.h>
#include <string.h>

int main() {
    FILE *log_file;
    char linha[200];
    int total_acessos = 0;
    int acessos_erro = 0;
    
    log_file = fopen("access.log", "r");
    if (log_file == NULL) {
        printf("Erro ao abrir arquivo de log!\n");
        return 1;
    }
    
    while (fgets(linha, sizeof(linha), log_file) != NULL) {
        total_acessos++;
        
        // Verifica se a linha contém códigos de erro HTTP comuns
        if (strstr(linha, " 404 ") || strstr(linha, " 500 ")) {
            acessos_erro++;
        }
    }
    
    fclose(log_file);
    
    printf("Total de acessos: %d\n", total_acessos);
    printf("Acessos com erro: %d\n", acessos_erro);
    printf("Taxa de erro: %.2f%%\n", (float)acessos_erro / total_acessos * 100);
    
    return 0;
}