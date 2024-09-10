#include <stdio.h>

void PrintDigit(int N)
{
    int r;
    if (N == 0)
    {
        return;
    }
    r = N % 10;
    PrintDigit(N / 10);
    printf("%d", r);
}
int main()
{
    int N = 123456;
    PrintDigit(N);
    return 0;
}

/*#define Max 100
// iteration code

void printdigit(int N)
{
    int arr[Max];
    int i = 0;
    int j, r;
    while (N){
        r = N % 10;
        arr[i] = r;
        i++;
        N = N / 10;
    for (j =i - 1;j >-1; j--)
        {
            printf("%d", arr[j]);
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    printdigit(N);
    return 0;
}
*/
