#include <stdio.h>
#include <math.h>

int main() {
    
    float x,y,r;
   
    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);
    
    r = pow(x,y);
    
    printf("Resultado: %.2f", r);
    
    return 0;
}