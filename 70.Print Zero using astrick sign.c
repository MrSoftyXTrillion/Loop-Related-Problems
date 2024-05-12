#include<stdio.h>
int main ()
{
    int row,col,h,w;
    scanf ("%d %d",&h,&w);
    for (row=1;row<=h;row++)
    {
        if (row==1 || row==h)
        {
            for (col=1;col<=w;col++)
            {
                printf ("*");
            }
        }
        else
        {
            printf ("*");
            for (col=1;col<=w-2;col++)
            {
                printf (" ");
            }
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}
