#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, flag = 1;
    printf("Enter The Number:");

    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is not a prime number");
    }
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {

            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d is a prime number\n", n);
            printf("Square Root of %d is %.2f", n, sqrt(n));
            //%.2f is used to print output upto 2 decimal places
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    }
    return 0;
}
