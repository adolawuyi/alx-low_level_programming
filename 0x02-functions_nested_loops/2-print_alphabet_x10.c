#include "main.h"
/**
 *print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ua;

	while (count++ <= 9)
	{
	for (ua = 'a'; ua <= 'z'; ua++)
	_putchar(ua);
	_putchar('\n');
	}
}
