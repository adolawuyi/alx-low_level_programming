#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the digits of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; ++hex)
	putchar(hex);
	for (hex = 'a'; hex <= 'f'; ++hex)
	putchar(hex);

	putchar('\n');

	return (0);
}
