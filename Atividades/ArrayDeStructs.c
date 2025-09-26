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
    // array de structs
    struct Pessoa pessoas[MAX_PESSOAS];

    // preenchendo manualmente
    pessoas[0].id = 1;
    strcpy(pessoas[0].nome, "Alice");
    pessoas[0].idade = 25;

    pessoas[1].id = 2;
    strcpy(pessoas[1].nome, "Bruno");
    pessoas[1].idade = 30;

    pessoas[2].id = 3;
    strcpy(pessoas[2].nome, "Carla");
    pessoas[2].idade = 22;

    // exibindo os dados
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("ID: %d | Nome: %s | Idade: %d\n",
               pessoas[i].id,
               pessoas[i].nome,
               pessoas[i].idade);
    }

    return 0;
}