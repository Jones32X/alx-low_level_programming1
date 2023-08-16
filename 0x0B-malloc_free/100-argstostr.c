#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: integer input value
 * @av: an array of double pointers
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int k;
	int m;
	int t = 0, n = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
			n++;
	}
	n = n + ac;

	string = malloc(sizeof(char) * n + 1);
	if (string == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
		{
			string[t] = av[k][m];
			t++;
		}
	if (string[t] == '\0')
	{
		string[t++] = '\n';
	}
	}
	return (string);
}
