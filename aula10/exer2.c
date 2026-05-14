#include <stdio.h>

int main() {
    char senha[50];
    int comprimento = 0;
    
    printf("Digite a senha: ");
    scanf("%49s", senha);
    
    while(senha[comprimento] != '\0'){
        comprimento++;
    }
    
    while(comprimento < 8){
        printf("Erro. A senha deve ter pelo menos 8 caracteres.\n");
        printf("Digite a senha: ");
        scanf("%49s", senha);
        comprimento = 0;
        while(senha[comprimento] != '\0'){
            comprimento++;
        }
    }
    
    printf("Senha criada.");
    
    
    return 0;
}
