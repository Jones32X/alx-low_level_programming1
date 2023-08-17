#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string to add
 * @s2: string to combine from
 * @n: amount of bytes to join from s1 to s2
 * Return: pointer to string outcome
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int k = 0;
	unsigned int b = 0;
	unsigned int legnth1 = 0;
	unsigned int legnth2 = 0;

	while (s1 && s1[legnth1])
		legnth1++;

	while (s2 && s2[legnth2])
		legnth2++;

	if (n < legnth2)
		z = malloc(sizeof(char) * (legnth1 + n + 1));
	else
		z = malloc(sizeof(char) * (legnth1 + legnth2 + 1));

	if (!z)
		return (NULL);

	while (k < legnth1)
	{
		z[k] = s1[k];
		k++;
	} while (n < legnth2 && k < (legnth1 + n))
			z[k++] = s2[b++];

	while (n >= legnth2 && k < (legnth1 + legnth2))
		z[k++] = s2[b++];

	z[k] = '\0';

	return (z);
}

