#include <stdio.h>

int mdc(int val_1, int val_2){
    if (val_1 == 0 || val_2 == 0){
        return 0;
    }
    else if (val_1 > val_2){
        return mdc((val_1 - val_2), val_2);
    }
    else if (val_1 == val_2){
        return val_1;
    }
    else{
        int aux;
        aux = val_1;
        val_1 = val_2;
        val_2 = aux;

        return mdc(val_1, val_2);
    }
}

int main(){
    int x, y, res;
    bool loop = 1;

    while (loop == 1){
        printf("Informe o primeiro valor: ");
        scanf("%d",&x);
            
        printf("Informe o segundo valor: ");
        scanf("%d",&y);

        res = mdc(x,y);

        printf("MDC de %d e %d: %d\n\n", x, y, res);

        printf("\n---------------------------------\n");
        printf("1 para continuar ou 0 para sair: ");
        scanf("%d",&loop);
    }

    return 0;
}