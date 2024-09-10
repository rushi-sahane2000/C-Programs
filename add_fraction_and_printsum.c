#include <stdio.h>
int gcd(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else
        return gcd(y % x, x);
}

int main()
{
    int a, b, c, d, x, y;
    printf("Enter the numerator:");
    scanf("%d", &a);
    printf("Enter the denominator:");
    scanf("%d", &b);
    printf("Enter the numerator:");
    scanf("%d", &c);
    printf("Enter the denominator:");
    scanf("%d", &d);

    x = (a * d) + (b * c);
    y = b * d;

   // gcd(x,y);

    printf("The added fraction is:%d %d",x/gcd(x,y),y/gcd(x,y));


    return 0;
}