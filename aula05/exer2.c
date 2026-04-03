#include <stdio.h>

int main() {
    
    float C, i;
    
    printf("Digite o capital: ");
    scanf("%f", &C);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    
    i = i/100;
    
    for(int t=1;t<=12;t++){
        float M = C * (1 + i * t);
        printf("Mes %d: %.2f\n", t ,M);
    }
    
    return 0;
}