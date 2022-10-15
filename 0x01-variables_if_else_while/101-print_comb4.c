#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 * Description: Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * Any possible combination of 3 digits like 0, 1 and 2 are considered same
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order
 * You can only use the putchar function, and for a maximum of 6 times.
 * Do not use any variable of type char.
 * Code should be in the main function.
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		d = a % 10; /* for unit numbers */
		c = (a / 10) % 10; /* for tens */
		b = a / 100; /* for hundredths */

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
