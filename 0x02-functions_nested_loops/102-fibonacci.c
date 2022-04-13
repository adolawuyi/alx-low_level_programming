#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return - always 0
 */
int main(void)
{
	unsigned long fibs = 0, fibs1 = 1, fibsum;
	float tot_sum;

	while(1)
	{
		fibsum = fibs + fibs1;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			tot_sum += fibsum;
		fibs + fibs1;
		fibs1 + fibsum;
	}
	printf("%d\n", tot_sum);

	return (0);
}
