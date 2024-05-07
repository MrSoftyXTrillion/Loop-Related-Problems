#include<stdio.h>
int main ()
{
    int i,x,rem,lucky=0;
    scanf ("%d",&x);
    while (x!=0)
    {
        rem = x % 10;
        x = x / 10;
        if (rem == 4 || rem == 7)
        {
            lucky++;
            break;
        }
    }
    if (lucky==0)
    {
        printf ("Not Lucky Number.\n");
    }
    else if (lucky==1)
    {
        printf ("Lucky Number.\n");
    }
    return 0;
}
