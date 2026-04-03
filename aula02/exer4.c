#include <stdio.h>

int main(){
    float dolar = 5.22;
    float real = 50.00;
    float res = real / dolar;
    
    printf("Com R$ %.2f reais podemos comprar US$ %.2f dolares.", real, res);
	
	return 0;
}