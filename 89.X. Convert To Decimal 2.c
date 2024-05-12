#include<stdio.h>
int main ()
{
    int i,t,count,sum,rem,j;
    long long int n;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf ("%lld",&n);
        count=0;
        while (n!=0)
        {
            rem = n%2;
            if (rem!=0)
            {
                count++;
            }
            n = n/2;
        }
        sum =0 ;
        for (j=0;j<count;j++)
        {
            sum+=(1<<j);
        }
        printf ("%d\n", sum);
    }
    return 0;
}
