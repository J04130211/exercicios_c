#include <stdio.h>

int main() {
    char nomes[5][50];      
    float notas[5][5], media[5]; 
    
    
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do/a aluno/a %d: ", i+1);
        scanf("%49s", nomes[i]);
    }
    
    
    for(int i = 0; i < 5; i++){
        float soma = 0;
        printf("\nDigite as notas do/a aluno/a %s: ", nomes[i]);
        for(int j = 0; j < 5; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / 5;  
    }
    
    
    for(int i = 0; i < 5; i++){
        if(media[i] >= 6){
            printf("\n%s: ", nomes[i]);
            for(int j = 0; j < 5; j++){
                printf("%.2f ", notas[i][j]);
            }
            printf("| Média: %.2f\n", media[i]);
        }
    }
    
    return 0;
}
