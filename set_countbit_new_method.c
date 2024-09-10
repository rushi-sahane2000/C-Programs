#include<stdio.h>
unsigned int countsetbit(int n)
{
    unsigned int count=0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
    
}

int main(){
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    printf("%d",countsetbit(n));

    return 0;
}