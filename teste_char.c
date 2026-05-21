#include <stdio.h>
    int main(void){

        char inicial;
        char nome[20];


        printf("Digite a inicial do seu nome:");
        scanf("%c", &inicial);

        printf("Digite seu primeiro nome:");
        scanf("%s", nome);

        printf("\n---Resultado---\n");
        printf("O nome cadastrado foi: %s\n", nome);
        printf("Inicial do sobrenome: %c\n", inicial);
        
    
    system("pause");
    return 0;
}
