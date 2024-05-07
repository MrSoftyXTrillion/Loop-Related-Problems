#include<stdio.h>
int main ()
{
    int i,n,a,b,power = 1;
    scanf ("%d %d",&a,&b);
    for (i=1;i<=b;i++)
    {
        power = power * a;
    }
    printf ("%d\n",power);
    return 0;
}
