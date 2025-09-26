#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 3   // quantidade máxima no array
#define MAX_NOME 50     // tamanho máximo do nome

// definição da struct
struct Pessoa {
    int id;
    char nome[MAX_NOME];
    int idade;
};

int main() {
    struct Pessoa pessoas[MAX_PESSOAS]; // array de structs

    printf("Cadastro de %d pessoas:\n\n", MAX_PESSOAS);

    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Pessoa %d\n", i + 1);

        // ID
        printf("Digite o ID: ");
        scanf("%d", &pessoas[i].id);
        getchar(); // limpa o \n do buffer

        // Nome
        printf("Digite o nome: ");
        fgets(pessoas[i].nome, MAX_NOME, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; // remove \n

        // Idade
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        getchar(); // limpa o \n do buffer

        printf("\n");
    }

    printf("\n=== Lista de pessoas cadastradas ===\n");
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("ID: %d | Nome: %s | Idade: %d\n",
               pessoas[i].id,
               pessoas[i].nome,
               pessoas[i].idade);
    }

    return 0;
}
