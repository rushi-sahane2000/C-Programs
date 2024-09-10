#include <stdio.h>
#include <math.h>
// First Logic
/*int main(){
    int n,intvar;
    scanf("%d",&n);
    double floatvar =sqrt((double)n);
    intvar=floatvar;
    if(intvar==floatvar)
    printf("success");
    else
    printf("failure");
    return 0;
}
*/
// Second Logic
// #include<stdio.h>
// #include<math.h>
int main()
{
    int n, intvar;
    printf("Enter The Number:");
    scanf("%d", &n);
    double floatvar = sqrt((double)n);
    intvar = (int)floatvar;
    if (intvar * intvar == n)
        printf("success");
    else
        printf("failure");
    return 0;
}