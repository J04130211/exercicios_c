#include <stdio.h>
#include <math.h>

float juros_compostos(float valor, float taxa, float tempo){
    
    return valor*pow(1+taxa,tempo);
}

int main() {
    
    float c, i, t;
    
    
    printf("Digite o valor investido: ");
    scanf("%f", &c);
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    i = i/100;
    printf("Digite o tempo: ");
    scanf("%f", &t);
    
    float total = juros_compostos(c,i,t);
    printf("%.2f", total);
   
    return 0;
}