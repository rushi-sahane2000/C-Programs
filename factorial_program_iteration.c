#include <stdio.h>

unsigned int Factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    printf("The Factorial Of %d is %d ", num, Factorial(num));
    return 0;
}