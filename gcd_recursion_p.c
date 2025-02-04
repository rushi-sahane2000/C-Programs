// C program to find GCD of two numbers
#include <stdio.h>

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// Driver program to test above function
int main()
{
	int a = 26, b = 12;
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}
