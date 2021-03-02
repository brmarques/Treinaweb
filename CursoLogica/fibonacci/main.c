#include <stdio.h>
#include <stdlib.h>

int main()
{
    int before = 0, actual = 1, temp = 0, elements, i = 0;
    printf("Digitar a quantidade de elementos para criar a sequência Fibonacci: ");
    scanf("%d", &elements);
    printf("Sequência gerada: \n");
    printf("%d  ", actual);
    for (i = 1; i < elements; i++){
        temp = actual;
        actual = actual + before;
        before = temp;
        printf("%d  ", actual);
    }

    return 0;
}
