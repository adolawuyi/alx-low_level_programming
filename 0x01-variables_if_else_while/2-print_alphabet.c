#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int la;
	for (la = 0; la < 26; ++la)
	putchar('a' + la);

	putchar('\n');

	return (0);
}
