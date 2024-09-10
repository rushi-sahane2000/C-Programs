#include <stdio.h>

int main()
{
    int a=12, b=43, c=53, d=34, min;
   // printf("Enter four numbers: ");
    //scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b)
        min = b;
    else
        min = a;
    if(c<min)
        min = c;
    if(d<min)
        min = d;
    printf("Minimum Value : %d", min);
    return 0;
}
