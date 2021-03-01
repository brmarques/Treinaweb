#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int temperatura = 50;
    //printf("%d \n", (5 * (temperatura-32) / 9));
    //int var = 2 + 3 * 4 / 5 - 6;
    //printf("%d \n", var);

    int numero1, numero2;
    printf("Digite o valor de número 1: ");
    scanf("%d", &numero1);
    printf("Digite o valor de número 2: ");
    scanf("%d", &numero2);
    printf("%d > 10 E %d >20? %d \n", numero1, numero2, numero1 > 10 && numero2 > 20);
    printf("%d > 10 OU %d > 20? %d \n", numero1, numero2, numero1 > 10 || numero2 > 20);
    printf("%d > 10 E %d >20? %d \n", numero1, numero2, !(numero1 > 10 && numero2 > 20));
    printf("%d > 10 OU %d > 20? %d \n", numero1, numero2, !(numero1 > 10 || numero2 > 20));
    return 0;

    //precedência operadores lógicos
    // && > || > !

}
