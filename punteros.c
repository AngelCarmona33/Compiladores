#include <stdio.h>

int main()
{
    int u = 3;
    int v;
    int *pu;    /*Puntero a un entero*/
    int *pv;    /*Puntero a un entero*/

    pu = &u;    /*Asigna dirección de u a *pu*/
    v = *pu;    /*Asigna valor de  u a v*/
    pv = &v     /*Asigna dirección de v a *pv*/

    printf("\n nu = %d &u=%p pu=%p *pu=%d", u, &u, pu, *pu);
    printf("\n nv = %d &v=%p pv=%p *pv=%d", v, &v, pv, *pv);
}