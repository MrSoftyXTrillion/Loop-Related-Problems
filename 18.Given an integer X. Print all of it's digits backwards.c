#include<stdio.h>
int main ()
{
    int i,x,rem;
    scanf ("%d",&x);
    while (x!=0)
    {
        rem = x % 10;
        x = x / 10;
        printf ("%d, ",rem);
    }
    return 0;
}
