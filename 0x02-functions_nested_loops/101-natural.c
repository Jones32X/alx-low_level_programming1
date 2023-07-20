#include <stdio.h>

/**
 * main - computes and prints the sum of all te muliples
 * of 3 or below 1024
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	unsigned long int sum3, sum5, sum;
	int j;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0)
		{
			sum3 = sum3 + j;
		}
		else if ((j % 5) == 0)
		{
			sum5 = sum5 + j;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
