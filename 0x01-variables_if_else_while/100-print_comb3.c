#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Description: Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * Prints only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putcher funtion, but for a maximum of 5 times.
 * You are not allowed to use any variable of type char
 * All codes should be in the main function
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10; /* for single digit numbers */
		z = x / 10; /* for double digit numbers */

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		x++;
	}
	putchar('\n');

	return (0);
}
