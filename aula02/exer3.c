#include <stdio.h>

int main(){
	int quantidade = 5;
	float preco_unitario = 12.50;
	float total = quantidade * preco_unitario;
	
	printf("Produto: Marmitex\n");
	printf("Quantidade: %d\n", quantidade);
	printf("Preço por unidade: R$ %.2f\n", preco_unitario);
	printf("O valor total é: R$ %.2f\n", total);
	
	return 0;
}