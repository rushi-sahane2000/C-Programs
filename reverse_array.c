#include <stdio.h>

void displayarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}   
int reversearray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    // int start=arr[0];
    // int end=size-1;
    displayarray(arr,size);
    reversearray(arr,0,size-1);
    displayarray(arr,size);
    return 0;
}