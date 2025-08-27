#include <stdio.h>
#include <stdlib.h>
int main () {
    int *p;
    p = (int *) malloc(sizeof(int));
    if (!p) {
        printf("Erro de memoria insuficiente!");
        return 1; // encerra o programa com erro
    }
    printf("Memoria alocada com sucesso!");
    free(p); // libera a memória
	return 0;
}