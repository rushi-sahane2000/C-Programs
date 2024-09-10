#include <stdio.h>
#define PI 3.14

int main()
{
    float diameter, radious, Area;
    printf("Enter The Diameter Of Circle\n");
    scanf("%f", &diameter);

    radious = (float)diameter / 2; // Expicit Typecasting int/int=int so resulting output are incerrect
    Area = PI * radious * radious;
    printf(" The Area Of Circle is %.2f", Area);

    return 0;
}