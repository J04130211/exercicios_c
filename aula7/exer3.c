#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int chute = 6, limite = 5;
    int numero = rand() % limite;
    
    
    while(chute != numero) {
        printf("Digite um número: ");
        scanf("%d", &chute);
        if(chute == numero){
            printf("Acertou!\n");
        }else{
            printf("Errou!\n");
        }
    }
    
    return 0;
}