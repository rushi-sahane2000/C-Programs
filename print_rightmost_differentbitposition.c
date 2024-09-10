#include<stdio.h>
#include<math.h>
unsigned int getrightmostsetbit(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    return log2(n & -n)+1;  //(-n)nothing but 2's compliment 
}
int positionofrightmostdifferentbit(int m,int n)
{
        return getrightmostsetbit(m ^ n);
}
int main(){
    int m,n;
    printf("Enter the number m and n:");
    scanf("%d %d",&m,&n);
    printf("%d",positionofrightmostdifferentbit(m,n));
    return 0;
}