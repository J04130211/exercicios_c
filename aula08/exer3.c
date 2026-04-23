#include <stdio.h>

int potencia(int x, int y) {
    if( y < 1 ) {
        return 1;
    } else {
        return x * potencia(x, y - 1);
}
}

int main() {
    
    int n1, n2;
    
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
   
    printf("%d", potencia(n1, n2));

    return 0;
}
