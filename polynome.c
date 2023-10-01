#include<stdio.h>
#include<math.h>
int a, b, c;
float d;
int main()
{
    printf("enter les coeficients\n");
    scanf("%i %i %i", &a, &b, &c);
    d=(b*b)-4*a*c;
    if(d<0)
    {
        printf("aucune solution");
    }
    else
    {
        if(d==0)
        {
            printf("la solution double est %g\n", (-b/2*a));
        }
        else
        {
            printf("deux solutions distinctes");
            printf("%g %g\n", (-b-sqrt(d))/(2*a), ((-b)+sqrt(d))/(2*a));
        }
    }
    return 0;
}
