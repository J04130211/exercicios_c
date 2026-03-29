#include <stdio.h>

int main() {
    
    int x,y;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o outro numero: ");
    scanf("%d", &y);
    
    if(x == y){
        printf("%d igual a %d", x,y);
    }
    if(x != y){
        printf("%d diferente de %d", x,y);
    }
    return 0;
}