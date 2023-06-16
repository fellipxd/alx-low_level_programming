#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   Prints all possible different combinations of three digits separated by ", "
 *   in ascending order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit; /* Variable for the first digit */
	int secondDigit; /* Variable for the second digit */
	int thirdDigit; /* Variable for the third digit */

	/* Print the combinations of three digits */
	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');

				if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
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

