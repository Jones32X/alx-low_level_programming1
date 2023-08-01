#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring
 *  needle in the string haystack.
 *  @haystack: tstring to be searched
 *  @needle: substring to be located
 *  Return: if substing is located, else - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
