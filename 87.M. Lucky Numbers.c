#include<stdio.h>
int main ()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    int found_lucky = 0;
    for (int i = a; i <= b; i++)
    {
        int num = i;
        int lucky = 1;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = 0;
                break;
            }
            num = num / 10;
        }
        if (lucky)
        {
            printf("%d ", i);
            found_lucky = 1;
        }
    }
    if (!found_lucky)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}
