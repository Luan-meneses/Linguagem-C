#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100 // Quantidade máxima de livros no sistema
#define MAX_NOME 50    // Tamanho máximo do nome do autor ou título

struct Livro
{
    int codigo;
    char titulo[MAX_NOME];
    char autor[MAX_NOME];
    int ano_publicacao;
    int disponivel; // 1 = disponível, 0 = emprestado
};

struct Livro biblioteca[MAX_LIVROS]; // Array que guarda até 100 livros
int total_livros = 0;                // Quantos livros foram cadastrados

void carregar_biblioteca(void);
void salvar_biblioteca(void);
void adicionar_livro(void);
void listar_livros(void);
int buscar_livro(int codigo);
void emprestar_livro(void);
void devolver_livro(void);
void menu_principal(void);

int main()
{
    carregar_biblioteca(); // Lê os dados do arquivo, se existirem
    menu_principal();      // Mostra o menu interativo ao usuário
    salvar_biblioteca();   // Salva alterações feitas no programa
    return 0;
}

void carregar_biblioteca(void)
{
    FILE *arquivo = fopen("biblioteca.txt", "r");

    if (arquivo == NULL)
    {
        printf("Arquivo de biblioteca não encontrado. Iniciando biblioteca vazia.\n");
        return;
    }

    while (fscanf(arquivo, "%d %s %s %d %d",
                  &biblioteca[total_livros].codigo,
                  biblioteca[total_livros].titulo,
                  biblioteca[total_livros].autor,
                  &biblioteca[total_livros].ano_publicacao,
                  &biblioteca[total_livros].disponivel) == 5 &&
           total_livros < MAX_LIVROS)
    {
        total_livros++;
    }

    fclose(arquivo);
    printf("Biblioteca carregada com %d livro(s).\n", total_livros);
}