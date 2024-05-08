#include<stdio.h>
int main ()
{
    int i,num,max=0,pos;
    for (i=1;i<=100;i++)
    {
        scanf ("%d",&num);
        if (num>max)
        {
            max = num;
            pos = i;
        }
    }
    printf ("%d\n%d",max,pos);
    return 0;
}
