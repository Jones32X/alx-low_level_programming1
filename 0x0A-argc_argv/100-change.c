#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main -  prints min amount of coins
 * @argc: argument amount
 * @argv: argument array
 * Return: 0 for Scucess, 1 for erro
 */

int main(int argc, char *argv[])
{
	int number;
	int k;
	int res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && number >= 0; k++)
	{
		while (number >= coins[k])
		{
			res++;
			number -= coins[k];
		}
	}
	printf("%d\n", res);
	return (0);
}

