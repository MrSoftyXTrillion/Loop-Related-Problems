#include<stdio.h>
int main ()
{
    int i,n,count=0;
    scanf ("%d",&n);
    while (n!=1)
    {
        if (n%2==0)
        {
            count++;
            n = n/2;
        }
    }
    printf ("%d\n",count);
    return 0;
}
