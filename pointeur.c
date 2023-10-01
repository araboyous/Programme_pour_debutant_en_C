#include<stdio.h>
 void  main()
{
    int x, y, m;
    int *p1, *p2; //c'est juste une declaration:je reserve la place memoire pour l'adresse de la variable pointee par p1.
    printf("entrer deux nombre\n");
    scanf("%i %i", &x, &y);
    p1=&x;

    p2=&y;
    m=(*p1)*(*p2);
    printf("\n %d fois %d = %d \n", *p1, *p2, m);

}
