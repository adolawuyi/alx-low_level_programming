#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print lowercase alphabets backwards
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; --n)
	putchar(n);
	putchar('\n');

	return (0);
}
