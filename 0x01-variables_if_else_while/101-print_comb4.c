#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   Prints all possible different combinations of three digits in ascending order,
 *   separated by a comma and followed by a space. The three digits must be different.
 *   The combinations are printed in the smallest order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1; /* Variable for the first digit */
	int digit2; /* Variable for the second digit */
	int digit3; /* Variable for the third digit */

	/* Print the combinations of three digits */
	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 != 7 || digit2 != 8 || digit3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

