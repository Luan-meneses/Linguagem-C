#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa aluno;
    
    strcpy(aluno.nome, "Carlos");
    aluno.idade = 21;
    aluno.altura = 1.75;
    
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Altura: %.2f\n", aluno.altura);
    
    return 0;
}