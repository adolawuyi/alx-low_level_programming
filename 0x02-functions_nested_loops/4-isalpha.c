#include "main.h"
/**
 *_isalpha - returns 1 if c is a letter, lowercase or uppercase
 *@c: takes in a character
 *Return: 1 if c is a letter, 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);

	else
	return (0);
}
