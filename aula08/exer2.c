#include <stdio.h>

int soma(int num) {
    if( num <= 1 ) {
        return 1;
    } else {
        return num + soma(num - 1);
    }
}

int main() {
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
   
    printf("%d", soma(n));

    return 0;
}
