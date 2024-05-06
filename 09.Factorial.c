#include<stdio.h>
int main ()
{
    while (1)
    {
        int i,n,factorial=1;
        scanf ("%d",&n);
        for (i=n;i>=1;i--)
        {
            factorial = factorial * i;
        }
        printf ("%d\n",factorial);
    }
    return 0;
}
