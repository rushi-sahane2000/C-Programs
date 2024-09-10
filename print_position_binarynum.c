//program are print the position of 1 in first rightmost occurance in 1 in given 
//binary number 
#include<stdio.h>
#include<math.h>
unsigned int target(int n)
{
    return log2(n & -n)+1;  //(-n)nothing but 2's compliment 
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%u",target(n));
    return 0;
}