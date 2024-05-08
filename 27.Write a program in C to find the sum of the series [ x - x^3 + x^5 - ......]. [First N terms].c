#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,x,n,sum=0,number;
    scanf ("%d %d",&x,&n);
    for (i=0,j=1;i<n;i++,j+=2)
    {
        number = pow(x,j);
        if (i%2!=0)
        {
            sum = sum-number;
            printf ("- %d^%d ",x,j);
        }
        else
        {
            sum = sum+number;
            if (i!=0)
            {
                printf ("+ ");
                printf ("%d^%d ",x,j);
            }
            if (i==0)
            {
                printf ("%d ",x);
            }
        }
    }
    printf ("= %d\n",sum);
    return 0;
}
