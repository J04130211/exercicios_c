#include <stdio.h>

float area(float x){
    return 3.14159*(x*x);
}

int main() {
    int r;
    
    printf("Digite o raio: ");
    scanf("%d", &r);
    float res = area(r);
    printf("%.2f", res);
   
    return 0;
}