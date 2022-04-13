#include "main.h"
/**
 *_islower - return 1 if lowercase alphabet, otherwise return 0
 *@c: take in a character
 *Return - 0 for UPPERCASE, 1 for lowercase
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
