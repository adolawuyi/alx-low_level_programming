#include <stdio.h>
/**
* main - Entry point
*
* Description: Print numbers 0 to 9 on one line
* Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	putchar('0' + n);
	putchar('\n');

	return (0);
}
