#include <stdio.h>

int main(){

    int v[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("insira o numero do vetor é\n");
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d, está na posicao %d\n", v[i], i);
    }
    
    

    return 0;
}