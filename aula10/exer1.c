#include <stdio.h>

int main() {
    char nome[40], disc[40];
    float notas[3], soma = 0, media;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite a disciplina: ");
    scanf("%s", disc);
    
    for(int i=0;i<3;i++){
        printf("Digite a %dª nota: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    for(int i=0;i<3;i++){
        soma = soma + notas[i];
    }
    media = soma/3;
    
    printf("%s, obteve %.1f pontos na media da disciplina %s.", nome, media, disc);
    
    return 0;
}
