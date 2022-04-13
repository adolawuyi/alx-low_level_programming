#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *	separated by a comma followed by a space
 *Return - always 0
 */
int main(void)
{
	int count;
	unsigned long fibs = 0, fibs1 = 1, fibsum;

	for (count = 0; count < 50; count++)
	{
		fibsum = fibs + fibs1;
		printf("%lu", fibsum);

		fibs = fibs1;
		fibs1 = fibsum;
		if (count == 49)
		printf("\n");
		else
		printf(", ");
	}
	return (0);
}
