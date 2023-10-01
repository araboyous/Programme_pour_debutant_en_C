#include<stdio.h>
int p;
float np, re;
int main()
{
    printf("entrer le prix du produit\n");
    scanf("%i",&p);
    if(p<10000)
    {
        re=(p*5)/100;
    }
    else
    {
        if(p>=10000&&p<50000)
        {
            re=(p*10)/100;
        }
        else
        {
            re=(p*15)/100;
        }
    }
    np=p-re;
    printf("le nouveau prix est %g\n", np);
    printf("remise %g\n", re);
    return 0;
}
