#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: Print the alphabet without e and q
  *
  * Return: 0
  */
 int main(void)
 {
         char ua;

	 for (ua = 'a'; ua <= 'z'; ++ua)
	 {
		if (ua != 'e' && ua != 'q')
		putchar(ua);
	 }
	 putchar('\n');

	 return (0);
 }
