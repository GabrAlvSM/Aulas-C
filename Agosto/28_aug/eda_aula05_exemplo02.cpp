#include <stdio.h>
#include <locale.h>
#include <stdlib.h>	// necess�rio p/ as fun��es rand() e srand()
#include <time.h>	//necess�rio p/ fun��o time()

void gerar(int [], int);
void imprimir(int [], int);
void selectionSort(int [], int);

int main()
{
    setlocale(LC_ALL, "");
    const int N=10;
    int A[N];
    printf("\n--------------------------------------------");
    printf("\nEXEMPLO SELECTION SORT");
    gerar(A, N);
    printf("\n--------------------------------------------");
    printf("\nValores armazenados no array");
    imprimir(A, N);
    printf("\n--------------------------------------------");
    printf("\nOrdenando o Array");
	selectionSort(A, N);
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

void selectionSort(int A[], int N){
	int i, j, aux, min;
    for (i=0; i < N-1; i++){
    	//primeiro n�mero n�o ordenado ainda
    	min = i;
        for (j=i+1; j < N; j++){
    		//Caso tenha algum n�mero menor faz a troca do m�nimo
            if(A[j] < A[min])
            	min = j;
    	}
    	//Se o m�nimo for diferente do primeiro n�mero n�o ordenado
    	//faz a troca para orden�-los
		if (i != min){
            aux = A[i];
            A[i] = A[min];
            A[min] = aux;
        }
    }
}



