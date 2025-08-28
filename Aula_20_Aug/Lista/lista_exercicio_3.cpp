#include <stdio.h>

float pot(int base, int exp){

	if(exp == 0){
		return 1;
	}
	else if (exp < 0) {
        return (1 / pot(base, (exp * -1)));
	}
	else{ 
		return (base * pot(base, exp-1)); 
	}
}

int main(){
	int b, x;
    int loop = 1;
    float res;

    while (loop == 1){
        printf("Informe o valor da BASE: ");
        scanf("%d",&b);
        
        printf("Informe o valor do EXPOENTE: ");
        scanf("%d",&x);

        res = pot(b,x);
        printf("Calculo: %d^%d \nResposta: %f\n\n", b, x, res);

        printf("---------------------------------\n");
        printf("1 para continuar ou 0 para sair: ");
        scanf("%d",&loop);
    }

	return 0;
}