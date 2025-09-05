#include <stdio.h>
#include <locale.h>
#include <stdlib.h>	// necess�rio p/ as fun��es rand() e srand()
#include <time.h>	//necess�rio p/ fun��o time()

void gerar(int [], int);
void imprimir(int [], int);
void insertionSort(int [], int);

int main()
{
    setlocale(LC_ALL, "");
    const int N=10;
    int A[N];
    printf("\n--------------------------------------------");
    printf("\nEXEMPLO INSERTION SORT");
    gerar(A, N);
    printf("\n--------------------------------------------");
    printf("\nValores armazenados no array");
    imprimir(A, N);
    printf("\n--------------------------------------------");
    printf("\nOrdenando o Array");
	insertionSort(A, N);
    printf("\n--------------------------------------------");
    printf("\nValores ordenados");
    imprimir(A, N);
    printf("\n--------------------------------------------");
    return 0;
}

void gerar(int A[], int N){
	int i;
	srand(time(NULL));
	for (i=0; i<N; i++){
		A[i] = rand() % 100; //gera aleatoriamente um n�mero entre 0 e 99
	}	
}

void imprimir(int A[], int N){
	int i;
    printf("\n--------------------------------------------");
    for (i=0; i<N; i++)
    {
        if(A[i] < 10)
			printf("\n|Posicao: %d | N�mero: 0%d|", i, A[i]);
		else
			printf("\n|Posicao: %d | N�mero: %d|", i, A[i]);
    }
}

void insertionSort(int A[], int N){
	int i, j, elemento;
    for (i=1; i < N; i++){
    	//O elemento que ser� usado para as compara��es � guardado
    	elemento = A[i];
    	//enquanto n�o encontrar a posi��o do elementos desloca-se todos 
    	//os elementos uma posi��o para a direita
        for (j=i-1; j>=0 && A[j]>elemento; j--)
            A[j+1] = A[j];
        //a posi��o foi encontrada e o elemento � colocado na posi��o correta
    	A[j+1] = elemento;
    }
}



