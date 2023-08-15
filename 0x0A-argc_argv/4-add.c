#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if strings are digits
 * @str: array string
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str))
	{
		if (!isdigit(str[cnt]))
		{
			return (0);
		}
		cnt++;
	}
	return (1);
}

/**
 * main - program name is printed
 * @argc: arguments count
 * @argv: agruments in fucntion
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cnt, str_to_int, sum;

	sum = 0;
	cnt = 1;

	while (cnt < argc)
	{
		if (check_num(argv[cnt]))
		{
			str_to_int = atoi(argv[cnt]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		cnt++;
	}
	printf("%d\n", sum);
	return (0);
}


