#include<stdio.h>
void permutation(int *trav, int *rep)
{
    int temps=0;
   //printf("avant evaluation, travail=%i\n repos=%i\n", trav, rep);
    temps=*trav;
    *trav=*rep;
    *rep=temps;
   //printf("apres evaluation, travail=%i\n repos=%i\n", trav, rep);
}
//void permutation(trav, rep);
int main()
{
    int trav=10;
    int rep=14;
    printf("avant evaluation, travail=%i\n repos=%i\n", trav, rep);
    permutation(&trav, &rep);
    printf("apres evaluation, travail=%i\n repos=%i\n", trav, rep);
    return 0;
}

