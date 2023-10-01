#include<stdio.h>
int factoriel(int n);
int p, h;

int main()
{
    printf("entrer un entier\n");
    scanf("%i",&p);
    h=factoriel(p);
    printf("le factoriel est %i\n",h);
    return 0;
}

int factoriel(int n)
{
    int i, facto=1;
   //printf("enter un nombre\n");
   //scanf("%i",&n);
   for(i=1; i<=n; i++)
   {
       facto=i*facto;
   }
   return facto;
}
