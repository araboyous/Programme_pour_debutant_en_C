#include<stdio.h>
int main()
{
   int i, n, facto=1;
   printf("enter un nombre\n");
   scanf("%i",&n);
   for(i=1; i<=n; i++)
   {
       facto=i*facto;
   }
   printf("le factoriel de %i est %i\n", n, facto);
   return 0;
}
