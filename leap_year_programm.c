#include<stdio.h>
int leapyear(int year)
{
    if (year%400==0)
    {
        return 1;
    }
    if (year%100==0)
    {
        return 0;
    }
    if (year%4==0)
    {
        return 1;
    }

    return 0;     
}
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    leapyear(year)?printf("leap year"):printf("non leap year");

    return 0;
}