#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers 0 to 9 on one line
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; ++n)

	putchar(n);
	
	putchar('\n');

	return (0);
}
