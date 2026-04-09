#include <stdio.h>
#include <math.h>

int diametro(int x){
    return pow(x,2);
}
float area(float x){
    return 3.14159*(x*x);
}
float circuf(float x){
    return 2*3.14159*x;
}

int main() {
    float r;
    
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("O raio é: %.2f\n", r);
    float d = diametro(r);
    printf("O diametro e: %.2f\n", d);
    float c = circuf(r);
    printf("A circunferencia e: %.2f\n", c);
    float a = area(r);
    printf("A area e: %.2f", a);
   
    return 0;
}