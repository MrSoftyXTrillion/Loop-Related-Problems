#include<stdio.h>
int main ()
{
    int row,col,h,w;
    scanf ("%d %d",&h,&w);
    for (row=1;row<=h;row++)
    {
        if (row==1 || row==h || row==(h/2)+1)
        {
            for (col=1;col<=w;col++)
            {
                printf ("*");
            }
            printf ("\n");
        }
        else if (row%2==0 && row<h)
        {
            for (col=1;col<=w-1;col++)
            {
                printf (" ");
            }
            printf ("*\n");
        }
    }
    return 0;
}
