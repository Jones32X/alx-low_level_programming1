#include "main.h"

/**
 * strlen - retursn the legnth of a string
 * @S: string
 * Return: length
 */
int _strlen(char *S)
{
	int longi = 0;

	while (*S != '\0')
	{
		longi++;
		S++;
	}
	return (longi);
}

