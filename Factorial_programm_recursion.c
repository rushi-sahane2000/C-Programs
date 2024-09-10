#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter The Number:");
    scanf("%d", &n);
    printf("The Factorial Of %d is %d ", n, factorial(n));
    return 0;
}