#include <stdio.h>

int conta(int x){
    for(int y=1;y<=x;y++){
        printf("%d\n", y);
    }
    
}

int main() {
   int n;
   
   printf("Digite um numero: ");
   scanf("%d", &n);
   conta(n);
   
   

    return 0;
}