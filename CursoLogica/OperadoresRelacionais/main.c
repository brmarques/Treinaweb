#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("%d é maior que 10? %d \n", numero, numero > 10);
    printf("%d é maior que 10? %d \n", numero, numero >= 10);
    printf("%d é maior que 10? %d \n", numero, numero < 10);
    printf("%d é maior que 10? %d \n", numero, numero <= 10);
    printf("%d é maior que 10? %d \n", numero, numero == 10);
    return 0;
}
