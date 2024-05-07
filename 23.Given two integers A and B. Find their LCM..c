#include<stdio.h>
int MIN(int a,int b)
{
    int x;
    if (a<b)
    {
        x = a;
    }
    else if (a>b)
    {
        x=b;
    }
    return x;
}
int main ()
{
    int n,num,i,a,b,gcd=0;
    scanf ("%d %d",&a,&b);
    int x = MIN(a,b);
    n = x;
    for (i=1;i<=n;i++)
    {
        if (a%i==0 && b%i==0)
        {
            if (i>gcd)
            {
                gcd = i;
            }
        }
    }
    printf ("%d\n",(a*b)/gcd);
    return 0;
}
