#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    printf("Digite o valor do primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o valor do segundo número: ");
    scanf("%d", &numero2);
    printf("%d + %d = %d \n", numero1, numero2, numero1 + numero2);
    printf("%d - %d = %d \n", numero1, numero2, numero1 - numero2);
    printf("%d * %d = %d \n", numero1, numero2, numero1 * numero2);
    printf("%d / %d = %d \n", numero1, numero2, numero1 / numero2);
    printf("O resto de %d dividido por %d é %d", numero1, numero2, numero1 % numero2);
    return 0;
}
