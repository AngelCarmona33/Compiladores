#include <stdio.h>

void func1 (int u, int v);
void func2 (int *pu, int *pv);

int main ()
{
    int u = 1;
    int v = 3; 

    printf("\n Antes de la llamada a func1: u=%d v=%d", u, v);
    func1 (u, v);
    printf("\n Despues de la llamada a func1: u=%d v=%d", u, v);

    printf("\n\n Antes de la llamada a func2: u=%d v=%d", u, v);
    func2(&u, &v);
    printf("\n Después de la llamada a func2: u=%d v=%d\n", u, v); 
}

void func1( int u, int v)
{
    u = 0;
    v = 0;

    printf("\n Dentro de func1:             u = %d   v = %d", u, v);
    return;
}

void func2(int *pu, int *pv)
{
    *pu = 0;
    *pv = 0;
    printf("\nDentro de func2:               *pu = %d  *pv=%d\n", *pu, *pv);
    return;
}
