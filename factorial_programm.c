#include<stdio.h>

//iterative Approach
// unsigned int factorial(unsigned int num)
// {
//     int res=1;
//     for (int i = 1; i<=num; i++)
//     {
//         res=res*i;
//     }
//     return res;
    
// }
//recursive Approach
unsigned int fact(unsigned int num)
{
    if(num<=1)
    {
        return 1;
    }
    return num*fact(num-1);

}

int main(){
    int num;
    printf("Enter The Number:");
    scanf("%d",&num);
    // printf("The Factorial of %d is %d",num,factorial(num));
    printf("The Factorial of %d is %d",num,fact(num));
    return 0;
}