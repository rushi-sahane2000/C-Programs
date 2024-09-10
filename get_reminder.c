#include <stdio.h>
int getreminder(int Number, int divisor)
{
    return (Number-divisor*(Number/divisor));
}

int main()
{
    int Number, divisor;
    printf("Enter The Number:");
    scanf("%d",&Number);
     printf("Enter The divisor:");
     scanf("%d",&divisor);
    printf("Remider is %d", getreminder(Number, divisor));

    return 0;
}