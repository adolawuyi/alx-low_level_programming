#include "main.h"
/**
 *islower - Write a function that checks for lowercase character
 *
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
