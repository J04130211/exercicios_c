#include <stdio.h>

int main() {
    
    float C, i, t;
    
    printf("Digite o capital: ");
    scanf("%f", &C);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    printf("Digite o tempo em meses: ");
    scanf("%f", &t);
    
    i = i/100;
    float M = C * (1 + i * t);
    
    printf("Total: %.2f", M);
    
    return 0;
}