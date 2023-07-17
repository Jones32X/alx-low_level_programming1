#include <stdio.h>
/**
 * main - Printing out the various comoputer types
 * Return 0 (IT WAS SUCESSFUL)
 */
int main(void)
{
	char x;
	int y;
	long int l;
	long long int k;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n," (unsigned long)sizeof(k));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
