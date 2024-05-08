#include<stdio.h>
int main ()
{
    int i,n,num,sum=9;
    scanf ("%d",&n);
    num = 9;
    printf ("%d ",num);
    for (i=0;i<n-1;i++)
    {
        num = num*10+9;
        sum+=num;
        printf ("+ %d ",num);
    }
    printf ("= %d\n",sum);
    return 0;
}
