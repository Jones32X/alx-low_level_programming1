#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies to separate memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *jjj;
	int p = 0;
	int t = 0;

	if (str == NULL)
		return (NULL);

	while (str[p] != '\0')
		p++;

	jjj = malloc(sizeof(char) * (p + 1));

	if (jjj == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		jjj[t] = str[t];

	return (jjj);
}
