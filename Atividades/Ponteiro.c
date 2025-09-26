#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    // valor de num 10
    printf("num: %d\n", num);

    // endereco de num
    printf("endereco de num (&num): %p\n", (void *)&num);

    // valor de ptr (guarda o endereco de num)
    printf("valor de ptr (endereco de num): %p\n", (void *)ptr);

    // endereco de ptr
    printf("endereco de ptr (&ptr): %p\n", (void *)&ptr);

    // valor guardado no endereco apontado por ptr (conteudo de num) 10
    printf("conteudo apontado por ptr (*ptr): %d\n", *ptr);

    return 0;

    /*num: 10 → valor armazenado na variável num.

    endereco de num (&num) → onde num está guardado na memória.

    valor de ptr (endereco de num) → como ptr = &num, ele mostra o mesmo endereço de num.

    endereco de ptr (&ptr) → onde o ponteiro ptr está guardado na memória (vai ser diferente de &num).

    conteudo apontado por ptr (*ptr) → valor dentro de num, acessado via ponteiro (10).*/
}
