#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int);

int main(void)
{
	unsigned int input_n;
	unsigned long long int fibonacci_number;

	printf("Enter number n: ");
	scanf("%u", &input_n);

	fibonacci_number = fibonacci(input_n);

	printf("Fibonacci number is %llu\n", fibonacci_number);

	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int fib = 0;

	for (unsigned int i = 2; i <= n; i++)
	{
		fib = a + b;
		a = b;      
		b = fib;   
	}
	return b;
}