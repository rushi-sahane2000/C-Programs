// #include <stdio.h>
// //gcd code
// int gcd(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }
//     if (b == 0)
//     {
//         return a;
//     }
//     if (a == b)
//     {
//         return a;
//     }
//     if (a > b)
//     {
//         return gcd(a - b, b);
//     }
//     return gcd(a, b - a);
// }

// int main()
// {
//     int a, b;
//     printf("Enter the number:");
//     scanf("%d %d", &a, &b);
//     printf("The gcd of number %d and %d is %d", a, b, gcd(a, b));

//     return 0;
// }

// lcm code
#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("lcm of %d and %d is %d",a,b,lcm(a, b));

    return 0;
}