#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
        max = a;
    else
        max = b;
    if (c > max)
        max = c;
    printf("Maximum Value : %d", max);
    return 0;
}
