#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosdigitados[10];
    int i = 0;
    for (i = 0; i <= 9; i++) {
        printf("Digite um número: ");
        scanf("%d", &numerosdigitados[i]);
    }
    printf("---------------------------------\n");
    printf ("Os números digitados foram: \n");
    for (i = 0; i <= 9; i++){
        printf("%d\n", numerosdigitados[i]);
    }
    return 0;
}
