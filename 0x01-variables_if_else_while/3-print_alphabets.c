#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the lower and UPPERCASE alphabet on
 *	the same line
 * Return: 0
 */
int main(void)
{
	int ua;

	for (ua = 0; ua < 26; ++ua)
	putchar('a' + ua);
	for (ua = 0; ua < 26; ++ua)
	putchar('A' + ua);

	putchar('\n');

	return (0);
}
