#include <stdio.h>

/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
