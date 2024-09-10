// tcs exam programm
//  #include <stdio.h>

// int main()
// {
//     int x, y, z;
//     int count1 = 0, count2 = 0;
//     scanf("%d %d %d", &x, &y, &z);
//     while (z != 1)
//     {
//         if (x % z == 0)
//         {
//             x--;
//             count1++;
//         }
//         else if (y % z == 0)
//         {
//             y--;
//             count2++;
//         }
//         else
//         {
//             z--;
//         }
//     }
//     printf("%d %d\n", count1, count2);

//     return 0;
// }

// in a given string count the number of letter
//
// program to print the sum of all digit of array are divisible by
// a given number or not
//

#include <stdio.h>
#include<stdlib.h>
int target(int arr[], int n)
{
    int reminder = 0;
    for (int i = 0; i < n; i++)
    {
        reminder = (reminder + arr[i]) % 3;
    }
    return (reminder==0);
}

int main()
{
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *arr = NULL;
    arr = (int *)malloc(sizeof(int));
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    if (target(arr,n))
    {
        printf("1\n");
    }
    else
        printf("0\n");
    
    return 0;
}