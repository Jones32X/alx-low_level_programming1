#include "main.h"
#include <stdio.h>

/**
 * main - all aguments recievd are printed
 * @argc: num of arguments
 * @argv: amount of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
