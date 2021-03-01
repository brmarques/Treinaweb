#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho, l;
    printf ("Digite a tamanho da piramide: ");
    scanf ("%d", &tamanho);

    for (int i = 1; i <= tamanho; i++) {
        printf("\n");

        for (l = 1; l <= i; l = l + 1) {
            printf("*");
        }
    }

    for (int i = 1; i <= tamanho; i++) {
        printf("\n");

        for (l = i; l < tamanho; l = l + 1) {
            printf("#");
        }
    }

    return 0;
}
