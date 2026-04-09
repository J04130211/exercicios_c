#include <stdio.h>
#include <math.h>

int diametro(int x){
    return pow(x,2);
}

int main() {
    int r;
    
    printf("Digite o raio: ");
    scanf("%d", &r);
    int res = diametro(r);
    printf("%d", res);
   
    return 0;
}