#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i;
    for (i = 0; i < 5; i++){
        printf("Digite um numero para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes da ordenação: ");
    for (i = 0; i < 5; i++){
        printf("\n%d", vetor[i]);
    }

    //bubble sort
    int alteracoes = 1;
    int temporario = 0;
    while (alteracoes > 0) {
        alteracoes = 0;
        for (i = 0; i < 5; i++) {
            if (vetor[i] > vetor[i + 1]) {
                temporario = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temporario;
                alteracoes = alteracoes + 1;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for (i = 0; i < 5; i++){
        printf ("\n%d", vetor[i]);
    }

    return 0;
}
