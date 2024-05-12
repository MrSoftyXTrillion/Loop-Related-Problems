#include<stdio.h>
int main ()
{
    int row,col,h,w;
    scanf ("%d %d",&h,&w);
    for (row=1;row<=h;row++)
    {
        if (row==1)
        {
            for (col=1;col<=w;col++)
            {
                printf ("*");
            }
            printf ("\n");
        }
        if (row>1)
        {
            for (col=2;col<=w;col++)
            {
                printf (" ");
            }
            printf ("*");
            printf ("\n");
        }
    }
    return 0;
}
