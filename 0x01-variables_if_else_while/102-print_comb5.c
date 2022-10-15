#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * The combination of numbers must be separated by ,, followed by space
 * The combination of numbers should be printed in ascending order.
 * Any combination of 0 and 1 are considerd the same.
 * Use only putchar, but a maximum of 8 times.
 * Do not use any variable of type char
 * All codes should be in the main function.
 * Return: 0
 */
int main(void)
{
	int a, b;
	int i, j, k, l;

	for (a = 0; b < 100; a++)
	{
		i = a % 10; /* for single fnums */
		j = a / 10; /* for double fnums */

		for (b = 0; b < 100; b++)
		{
			k = b % 10; /* for single snums */
			l = b / 10; /* for double snums */

			if (i < k || (i == k && j < l))
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');

				if (!(i == 9 && j == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
