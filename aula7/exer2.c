#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(){
    
    int limite = 9;
    int inicio = 1;
    int numero = inicio + rand() % limite;
    return numero;
}

int main() {
    srand(time(NULL));
    
    int x, y, r, res;
    
    x = numero();
    y = numero();
    
    r = x+y;
    printf("%d + %d = ", x, y);
    scanf("%d", &res);
    
    if(r == res){
        printf("Acertou!");
    }else{
        printf("Errou!");
    }
    
    return 0;
}