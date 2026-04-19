#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int res, r = res, cont = 0;
    
    while(r == res){
        srand(time(NULL));
        int limite = 10;
        int n1 = rand() % limite;
        int n2 = rand() % limite;
        res = n1 + n2;
        
        printf("%d + %d = ", n1, n2);
        scanf("%d", &r);
        if(r == res){
            printf("Acertou!\n");
            cont++;
        }else{
            printf("Errou!\n");
        }
    }
    
    if(cont == 1){
        printf("Você acertou %d vez!", cont);
    }else{
        printf("Você acertou %d vezes!", cont);
    }
    
    return 0;
}