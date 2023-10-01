#include<stdio.h>
int i=1,n,facto=1;
int main()
{
    printf("entrer un entier\n");
    scanf("%i",&n);
    do
    {
        facto=i*facto;
        i++;
    } while(i<=n);
    printf("le factoriel est %i\n", facto);
    return 0;

}
