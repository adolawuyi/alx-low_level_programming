#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 0
 *starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int b = 0;

	while (b < 10)
	{
	putchar(48 + b);
	if (b != 9)
	{
	putchar(',');
	putchar(' ');
	}
	b++;
	putchar('\n');

	return (0);
}
