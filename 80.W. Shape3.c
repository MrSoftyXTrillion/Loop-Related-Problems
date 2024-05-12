#include<stdio.h>
int main ()
{
    int row,col,h;
    scanf ("%d",&h);
    for (row=1;row<=h;row++)
    {
        for (col=1;col<=h-row;col++)
        {
            printf (" ");
        }
        for (col=1;col<=2*row-1;col++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    for (row=h;row>=1;row--)
    {
        for (col=1;col<=h-row;col++)
        {
            printf (" ");
        }
        for (col=1;col<=2*row-1;col++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
