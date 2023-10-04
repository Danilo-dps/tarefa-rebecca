#include <stdio.h>
#include <locale.h>

int main() {
		setlocale (LC_ALL, "Portuguese");
    int i, j, matriz[5][5];

    // Preenche a matriz com números de 1 a 25 para fins de demonstração
    int count = 1;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            matriz[i][j] = count++;
        }
    }
    // Imprime a diagonal principal
    printf("Diagonal principal:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
    // Imprime a diagonal secundária
    printf("Diagonal secundária:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", matriz[i][4-i]);
    }
    return 0;
}

