#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   Prints all possible different combinations of two digits separated by ", "
 *   in ascending order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit; /* Variable for the first digit */
	int secondDigit; /* Variable for the second digit */

	/* Print the combinations of two digits */
	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');

			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

