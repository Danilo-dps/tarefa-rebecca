#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[100], i;
    srand(time(0)); // para gerar n�meros aleat�rios diferentes a cada execu��o

    for(i = 0; i < 100; i++) {
        array[i] = (rand() % 10) + 1; // gera um n�mero aleat�rio entre 1 e 10
    }
    // Imprime os n�meros gerados
    for(i = 0; i < 100; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
//meu primeiro contado com a fun��o "srand"

