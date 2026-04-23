#include <stdio.h>

void lanca(int num) {
    if( num < 1 ) {
        printf("decolar!");
    } else {
        printf("%d, ", num);
        lanca(num - 1);
    }
}

int main() {
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
   
    lanca(n);

    return 0;
}
