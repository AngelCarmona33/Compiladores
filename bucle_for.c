/*El ciclo for se compone de una expresión inicial, la condición
que controla al ciclo y un contador que indicara cuanto debe
avanzar el ciclo */

#include <stdio.h>
int main()
{
    int n, numeroTriangular;

    printf("Tabla de números rectangulares\n\n");
    printf("n       Suma de 1 a n\n");
    printf("----    ------------\n");

    numeroTriangular = 0;

    for(n=1; n<= 10; ++n)
    {
        numeroTriangular += n;
        printf("%2i         %2i\n", n, numeroTriangular);
    }
    return 0;
}
