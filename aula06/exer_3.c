#include <stdio.h>

float circuf(float x){
    return 2*3.14159*x;
}

int main() {
    int r;
    
    printf("Digite o raio: ");
    scanf("%d", &r);
    float res = circuf(r);
    printf("%.2f", res);
   
    return 0;
}