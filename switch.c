#include<stdio.h>
char l;
int main()
{
    printf("entrer un caractere\n");
    scanf("%c",&l);
    switch(l)
    {case 'a': printf("premiere lettre de l'alphabet\n");
    break;
    case 'z': printf("derniere lettre de l'alphabet\n");
    break;
    default:
        printf("caractere intermediaire");
    }
    return 0;
}
