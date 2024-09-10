#include <stdio.h>
//find the second largest number 
int main()
{
    int a, b, c;
    printf("Enter 3 Numbers:");
    scanf("%d%d%d ", &a, &b, &c);
    // a is largest
    if (a >= b && a >= c)
    {
        if (b >= c)
            printf("The largest Number is: %d", b);
        else
            printf("The largest Number is :%d", c);
    }
    // b is largest
    else if (b >= a && b >= c)
    {
        if (a >= c)
            printf("The largest Number is: %d", a);
        else
            printf("The largest Number is: %d", c);
    }
    // c is largest
    else if (a >= b)
        printf("The largest Number is: %d", a);
    if (b >= a)
        printf("The largest Number is :%d", b);
    return 0;
}