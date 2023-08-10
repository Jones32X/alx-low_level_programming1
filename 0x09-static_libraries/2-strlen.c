#include "main.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int longer;

	longer = 0;

	while (*s != '\0')
	{
		longer++;
		s++;
	}
	return (longer);
}
