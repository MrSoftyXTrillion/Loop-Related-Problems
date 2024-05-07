#include<stdio.h>
int main ()
{
    int n,rem,i=0,binary[100],j;
    scanf ("%d",&n);
    while (n!=0)
    {
        rem = n%2;
        binary[i++] = rem;
        n = n/2;
    }
    for (j=i-1;j>=0;j--)
    {
        printf ("%d",binary[j]);
    }
    return 0;
}
