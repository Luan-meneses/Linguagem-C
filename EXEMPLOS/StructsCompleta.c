#include <stdio.h>
#include <string.h>

// Definição da estrutura
struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
};

// Função que trabalha com struct
void exibir_produto(struct Produto p) {
    printf("Código: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preço: R$ %.2f\n", p.preco);
    printf("Estoque: %d unidades\n", p.estoque);
    printf("--------------------\n");
}

// Função que modifica struct (passagem por referência)
void aplicar_desconto(struct Produto *p, float percentual) {
    p->preco *= (1 - percentual / 100);
}

int main() {
    // Inicialização de struct
    struct Produto produto1 = {1001, "Notebook", 2500.00, 15};
    
    // Outra forma de inicialização
    struct Produto produto2;
    produto2.codigo = 1002;
    strcpy(produto2.nome, "Mouse");
    produto2.preco = 45.90;
    produto2.estoque = 50;
    
    exibir_produto(produto1);
    exibir_produto(produto2);
    
    // Aplicando desconto
    aplicar_desconto(&produto1, 10); // 10% de desconto
    printf("Após desconto:\n");
    exibir_produto(produto1);
    
    return 0;
}