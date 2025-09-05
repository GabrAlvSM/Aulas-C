#include <stdio.h>
#include <locale.h>

void f3(int);

int main(){
    setlocale(LC_ALL, "");
    int n1;

    printf("Informe o valor: ");
    scanf("%d", &n1);

    f3(n1);

    return 0;
}

void f3(int n){
    if(n == 0){
        printf("\nzero\n");
    }else{
        printf("\n%d", n);
        f3(n-1);
    }
}