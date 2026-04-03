#include <stdio.h>
#include <math.h>

int main() {
    
    float C, i;
    int temp;
    
    printf("Digite o capital: ");
    scanf("%f", &C);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    printf("Digite o tempo em meses: ");
    scanf("%d", &temp);
    
    i = i/100;
    
    for(int t=1;t<=temp;t++){
        float M = C * pow(1+i,t);
        printf("Mes %d: %.2f\n", t ,M);
    }
    
    return 0;
}