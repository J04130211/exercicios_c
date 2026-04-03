#include <stdio.h>

int main() {
    
    float nota;
    
    printf("Qual é a sua nota: ");
    scanf("%f", &nota);
  
    
    if(nota >= 6){
        printf("Aprovado!");
    }
    if(nota < 6){
        printf("Reprovado!");
    }
    return 0;
}