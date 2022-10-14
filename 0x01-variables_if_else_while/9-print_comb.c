#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 * Description: seperated by ,, followed by space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
