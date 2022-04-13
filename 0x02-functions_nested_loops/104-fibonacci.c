#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 * Return: Always o.
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fibs2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fibs2_half1, fibs2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		printf("%lu, ", sum);
		fib1 = fibs2;
		fibs2 = sum;
	}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib2_half1 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	printf("%d\n", tot_sum);

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fibs2_half1;
		half2 = fibs1_half2 + fibs2_half2;
		
		if (fib1_half2 + fibs2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
		printf(' ');
		fib1_half1 = fibs2_half1;
		fib1_half2 = fibs2_half2;
		fibs2_half1 = half1;
		fibs2_half2 = half2;
	}
	printf("\n");

	return (0);
}
