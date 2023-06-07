#include <stdio.h>
#include <math.h>

/*Metodo principal*/
int main(int argc, char const *argv[])
{
    /*Variables a usar*/
    double a,b,c,disc;

    /*Deteccion de valores*/
    printf("Ingresa el valor de A: ");
    scanf(&a);
    printf("Ingrese el valor de B: ");
    scanf(&b);
    printf("Ingrese el valor de C: ");
    scanf(&c);

    /*Procedimiento*/

    disc = sqrt(b)-4*a*c;
    printf ("", disc);



    return 0;/*No errores*/
}/*Fin de programa*/
