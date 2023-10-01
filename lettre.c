#include<stdio.h>
char c;
int x, y;
int main()
{
    printf("enter le premier entier\n");
    scanf("%i",&x);
    printf("entrer le deuxieme\n");
    scanf("%i",&y);
    printf("selon l'operation que vous voulez effectuer\n");
    printf("tapez a pour l'addition\n");
    printf("tapez s pour la soustraction\n");
    printf("tapez m pour la multiplication\n");
    printf("taper d pour la division\n");
    scanf("%c",&c);
    switch(c)
    {   case 'a': printf("la somme est %i\n", (x+y));
        break;
        case 's': printf("la soustraction est %i\n", (x-y));
        break;
        case 'm': printf("le produit est %i\n", (x*y));
        break;
        default: printf("le quotient est %f\n", (x/y));
    }
    return 0;
}
