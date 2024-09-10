// C program to check whether a number
// is prime or not using recursion
#include <stdio.h>
#include <math.h>

// function check whether a number
// is prime or not
int isPrime(int n)
{
	static int i = 2;

	// corner cases
	if (n == 0 || n == 1)
	{
		return 0;
	}

	// Checking Prime
	if (n == i)
		return 1;

	// base cases
	if (n % i == 0)
	{
		return 0;
	}
	i++;
	return isPrime(n);
}

// Driver Code
int main()
{
	int n;
	printf("Enter number to be checked: ");
	scanf("%d", &n);
	if (isPrime(n))
	{
		printf("%d is a prime number\n", n);
		printf("Square root of %d is %.2f", n, sqrt(n));
		//%.2f is used to print output upto 2 decimal places
	}
	else
	{
		printf("%d is not a prime number", n);
	}
	return 0;
}
