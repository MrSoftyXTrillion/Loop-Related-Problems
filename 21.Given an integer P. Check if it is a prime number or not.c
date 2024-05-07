#include<stdio.h>
int main ()
{
    int i,p,prime = 0;
    scanf ("%d",&p);
    for (i=2;i<p;i++)
    {
        if (p%i==0)
        {
            prime++;
            break;
        }
    }
    if (prime==0)
    {
        printf ("Prime Number.\n");
    }
    else if (prime==1)
    {
        printf ("Not Prime Number.\n");
    }
    return 0;
}
