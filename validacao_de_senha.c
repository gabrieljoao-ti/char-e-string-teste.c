#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() { 

    char senha[40];
    int tem_numero = 0;
    int tamanho = 0;

    printf("Cadastre sua nova senha: "); 
    scanf("%s", senha);

    tamanho = strlen(senha);

    for(int i = 0; i < tamanho; i++){
        if(senha[i] >= '0' && senha[i] <= '9'){
            tem_numero = 1;
        }
    }

    printf("\n---Analise de senha:---\n");
    if(tamanho >= 6 && tem_numero == 1){
        printf("Senha valida e segura!\n");
    } else {
        printf("Senha Invalida!\n");
        printf("Motivo da Invalidade:");

        if(tamanho < 6) {
            printf("\n--A senha deve ter no minimo 6 caracteres--\n");
        }
        if(tem_numero == 0) {
            printf("\n--A senha deve ter pelo menos um numero--\n"); 
        }
    }

    system("pause");
    return 0;
}
