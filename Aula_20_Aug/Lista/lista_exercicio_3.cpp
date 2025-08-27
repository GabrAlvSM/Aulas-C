#include <stdio.h>

int pot(int base, int exp){

	if(exp == 0){
		return 1;
	}
	else if (exp < 0) {
        exp = exp*(-1);
        // base = (1/base);
        
        return (1 / (float)(base * pot(base, exp-1))); 
	}
	else{ 
		return (base * pot(base, exp-1)); 
	}
}

int main(){
	int x;
	int y = 1;

    while (y > 0){
        printf("Informe o valor da BASE: ");
        scanf("%d",&y);
        
        printf("Informe o valor do EXPOENTE: ");
        scanf("%d",&x);
        
        float res = pot(y,x);
        printf("Calculo: %d^%d \nResposta: %f\n\n", y, x, res);

        printf("---------------------------------\n");
        printf("1 para continuar ou 0 para sair: ");
        scanf("%d",&y);
    }
	return 0;
}