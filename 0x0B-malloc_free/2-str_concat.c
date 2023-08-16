#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string value to concatenate 1
 * @s2: 2nd string value to concatenate
 * Return: concatenate sting 1 and 2
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int l;
	int cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = cj = 0;

	while (s1[l] != '\0')
		l++;

	while (s2[cj] != '\0')
		cj++;

	concatenate = malloc(sizeof(char) * (l + cj + 1));

	if (concatenate == NULL)
		return (NULL);
	l = cj = 0;

	while (s1[l] != '\0')
	{
		concatenate[l] = s1[l];
		l++;
	}

	while (s2[cj] != '\0')
	{
		concatenate[l] = s2[cj];
		l++;
		cj++;
	}
	concatenate[l] = '\0';
	return (concatenate);
}


