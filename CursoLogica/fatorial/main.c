#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fatorial, n, numero;
    printf ("Digite um número para descobrir o seu fatorial: ");
    scanf("%d", &n);
    numero = n;

    for(fatorial=1; n > 1; n = n - 1){
        fatorial = fatorial * n;
    }
    printf("Fatorial de %d é %d.", numero, fatorial);

    return 0;
}
