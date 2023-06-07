#include <stdio.h>
int main(void)
{
    char c;
    printf("enter a single character:\n");
    scanf("%c",&c);
    if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
        printf(" es un caracter alfabetico.\n ");
    else if (c>='0'&& c<='9')
    {
        printf("es un digito\n");
    }
    else("es un caracter especial");
    
    return 0;
}
