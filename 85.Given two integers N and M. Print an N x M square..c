#include<stdio.h>
int main ()
{
    int row,col,n,m;
    scanf ("%d %d",&n,&m);
    for (row=1;row<=n;row++)
    {
        for (col=1;col<=m;col++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
