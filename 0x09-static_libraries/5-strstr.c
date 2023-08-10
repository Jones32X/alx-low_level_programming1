#include "main.h"

/**
 * _strstr - entry point
 * @haystack: input value
 * @needle: - input value
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *v = haystack;
		char *w = needle;

		while (*v == *w && *w != '\0')
		{
			v++;
			w++;
		}

		if (*w == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
