#include<stdio.h>
#define T 50
int tab[T];
int n, i, min, max;
int main()
{
    printf("DEFINITION DE LA TAILLE REELLE DU TABLEAU\n");
    printf("entrer un entier inferieur ou egale a 50\n");
    scanf("%i",&n);
     printf("entrer les elements du tableau\n");
    for(i=0; i<=n-1; i++)
    {

        printf("tab[%i] est \n", i);
        scanf("%i",&tab[i]);
    }
    for(i=0; i<=n-1; i++)
    {
        printf("tab[%i] = %i\n", i, tab[i]);
    }

        min=tab[0];

        for(i=0; i<=n-1; i++)
        {
            if(tab[i]<=min)
            {
                min=tab[i];
            }
        }
        printf("le minimum est %i\n", min);

        max=tab[0];
        for(i=0; i<=n-1; i++)
        {
            if(max<=tab[i])
            {
                max=tab[i];
            }
        }
        printf("le maximum est %i\n", max);

    return 0;
}
