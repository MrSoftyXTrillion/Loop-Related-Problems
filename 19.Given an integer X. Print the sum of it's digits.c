#include<stdio.h>
int main ()
{
    int i,x,rem=0;
    scanf ("%d",&x);
    while (x!=0)
    {
        rem += x % 10;
        x = x / 10;
    }
    printf ("%d\n",rem);
    return 0;
}
