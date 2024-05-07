#include<stdio.h>
#include<math.h>
int main ()
{
    long long int i,n,x=0,digit,y;
    scanf ("%lld",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%lld",&digit);
        x = x * 10 + digit;
    }
    y = pow(x,2);
    printf ("%lld\n",y);
    return 0;
}
