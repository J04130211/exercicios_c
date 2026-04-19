#include <stdio.h>

int menor(int x, int y){
    if(x>y){
        return y;
    }else{
        return x;
    }
}

int menor_de_tres(int a, int b, int c){
    int res = menor(a, b);
    res = menor(res, c);
    
    return res;
}

int main() {
    int nx, ny, nz;
    
    printf("Digite x:");
    scanf("%d", &nx);
    printf("Digite y:");
    scanf("%d", &ny);
    printf("Digite z:");
    scanf("%d", &nz);
    int resultado = menor_de_tres(nx, ny, nz);
    printf("O menor: %d", resultado);

    return 0;
}
