#include <stdio.h>
#include <math.h>

int findPrime(int n)
{
    if (n == 1)
        return 0;

    int i, flag = 1;

    for (i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return 1;
    return 0;
}

int main()
{
    int n1, n2, i;
    printf("Enter lower value of range : ");
    scanf("%d", &n1);
    printf("Enter higher value of range : ");
    scanf("%d", &n2);
    printf("All prime numbers in this range are: ");
    for (i = n1; i <= n2; i++)
    {
        if (findPrime(i))
            printf("%d ", i);
    }
    return 0;
}
