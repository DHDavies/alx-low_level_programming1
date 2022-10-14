#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
