#include <stdio.h>
#include <math.h>
#define PI 3.14

float CircleArea(float r)
{
    return PI * r * r;
}

int main()
{
    float r, diameter, Area;
    printf("Enter The Diamenter Of Circle: ");
    scanf("%f", &diameter);
    r = (float)diameter / 2;
    printf("The Area Of Circle is %.2f", CircleArea(r));

    return 0;
}