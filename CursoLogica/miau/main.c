#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miau, i;

    printf("Digite um número de quantidades de miados: ");
    scanf("%d", &miau);
    for (i= 0; i < miau; i++){
        printf("MIAU\n");
    }

    return 0;
}
