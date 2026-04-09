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
    
    while(t<=12){
        float total = juros_compostos(c,i,t);
        printf("Mes %.0f: %.2f\n",t, total);
        t++;
    }
    
   
   
    return 0;
}