#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print the last digit of the number and
 *	check whether its greater 5 or less
 *	than 6 and not 0 or equal to zero
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d %s\n", n, n % 10,
	((n % 10) == 0) ? "and is 0"
	: (((n % 10) > 5) ? "and is greater than 5"
	: "and is less than 6 and not 0"));

	return (0);
}
