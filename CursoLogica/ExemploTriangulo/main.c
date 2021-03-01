#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite  um valor para A: ");
    scanf("%d", &a);
    printf("Digite  um valor para B: ");
    scanf("%d", &b);
    printf("Digite  um valor para C: ");
    scanf("%d", &c);
    if ((a == b) && (b == c)) {
        printf("\nO triângulo é equilátero.");
    } else if ((a != b) && (b != c) && (a != c)) {
        printf("\nO triângulo é escaleno.");
    } else {
        printf("O triângulo é isósceles.");
    }

    return 0;
}
