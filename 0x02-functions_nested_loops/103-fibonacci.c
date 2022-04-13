#include <stdio.h>
/**
 * main - print the sum of even valued fibonachi sequence
 * terms not extending 40000000000
 * Return: Always 0
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
