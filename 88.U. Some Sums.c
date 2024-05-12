#include <stdio.h>
int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    int totalSum = 0;
    for (int i = 1; i <= N; i++)
    {
        int num = i;
        int sumOfDigits = 0;
        while (num > 0)
        {
            sumOfDigits += num % 10;
            num /= 10;
        }
        if (sumOfDigits >= A && sumOfDigits <= B)
        {
            totalSum += i;
        }
    }
    printf("%d\n", totalSum);
    return 0;
}
