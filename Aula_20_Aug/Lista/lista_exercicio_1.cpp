#include <stdio.h>

int pot(int exp){
	
	if(exp == 0){
		return 1;
	}else{	
		return (2*pot(exp-1)); 
	}
}

int main(){
	int x;
	
	printf("Informe o valor do expoente: ");
	scanf("%d",&x);
	
	long res = pot(x);
	printf("Calculo: 2^%d \nResposta: %ld\n", x, res);
	
	return 0;
}