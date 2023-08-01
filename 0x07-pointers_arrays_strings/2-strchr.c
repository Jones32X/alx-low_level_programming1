#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: the string to be searched fro
 * @c: the characte to be located
 * Return: if c is found  - a pointer to the first occurance
 * If c is not foundthe -NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
