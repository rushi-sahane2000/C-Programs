#include<stdio.h>

int countsetbit(int n)
{

    int count=0;
    while (n)
    {
        count=count + (n&1);
        n=n/2;
    }
    return count;
}
int countbit(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n&1)+countbit(n/2);
}

int main(){
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    // printf("%d",countsetbit(n));
    printf("%d",countbit(n));
    return 0;
}