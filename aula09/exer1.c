#include <stdio.h>
#include <math.h>

int main() {
    int dia[7];
    float sim = 0;
    int nao = 0;
    float media;
    
    printf("Responda 1 para Sim, e 0 para não\n");
    
    for(int i = 0; i < 7; i++){
        printf("Choveu no dia %d: ", i+1);
        scanf("%d", &dia[i]);
        while(dia[i] != 0 && dia[i] != 1){
            printf("Erro.\n");
            printf("Choveu no dia %d: ", i+1);
            scanf("%d", &dia[i]);
        }
        
        switch(dia[i]){
            case 0:
                nao++;
                break;
            case 1:
                sim++;
                break;
        }
        
    }
    media = (sim/7)*100;
    media = floor(media);
    
    printf("Resultado: %.0f%% de dias chuvosos.", media);

    return 0;
}
