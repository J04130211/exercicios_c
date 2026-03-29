#include <stdio.h>

int main() {
    
    float nota;
    
    printf("Qual é a sua nota: ");
    scanf("%f", &nota);
  
    
    if(nota >= 9){
        printf("Conceito A");
    }
    if(nota >= 8 && nota <9){
        printf("Conceito B!");
    }
    if(nota >= 7 && nota <8){
        printf("Conceito C!");
    }
    if(nota >= 6 && nota <7){
        printf("Conceito D!");
    }
    if(nota < 6){
        printf("Conceito E!");
    }
    return 0;
}