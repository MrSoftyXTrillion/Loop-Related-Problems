#include<stdio.h>
int main ()
{
    int i,n;
    scanf ("%d",&n);
    for (i=3;i<=n;i+=4)
    {
        printf ("%d ",i);
    }
    return 0;
}
