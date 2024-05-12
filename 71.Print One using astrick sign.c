#include<stdio.h>
int main ()
{
    int row,col,h,w;
    scanf ("%d %d",&h,&w);
    for (row=1;row<=h;row++)
    {
        for (col=1;col<=w-1;col++)
        {
            printf (" ");
        }
        printf ("*\n");
    }
}
