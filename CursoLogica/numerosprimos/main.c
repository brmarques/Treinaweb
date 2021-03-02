#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, qntdivisores = 0, i = 1;
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &numero);
    for (i; i <= numero; i++){
        if (numero % i == 0){
            qntdivisores++;
        }
    }
        if (qntdivisores == 2){
            printf("NÚMERO PRIMO");
        } else {
            printf("O número não é PRIMO");
        }

    return 0;
}
