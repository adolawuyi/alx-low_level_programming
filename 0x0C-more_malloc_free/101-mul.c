#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - multiplies two positive numberd
  * @argc: n arguments
  * @argv: args
  * Return: int
  */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][i] != '\0'; j++)
		{
			if (argv[i][i] > 57 || argv[i][i] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1] * atol(argv[2]);
		   printf("%lu\n", mul);

	return (0);
}
