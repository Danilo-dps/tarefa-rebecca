#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[100], i;
    srand(time(0)); // para gerar números aleatórios diferentes a cada execução

    for(i = 0; i < 100; i++) {
        array[i] = (rand() % 10) + 1; // gera um número aleatório entre 1 e 10
    }
    // Imprime os números gerados
    for(i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
//meu primeiro contado com a função "srand"

