#include "main.h"
/**
 *_islower - Write a function that checks for lowercase character.
 *@c: take in a character
 *Return - 0 for UPPERCASE, 1 for lowercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
