// Sum of digits of nummber
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter The Number:");
    scanf("%d", &n);
    while (n)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}