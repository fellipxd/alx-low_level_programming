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
	int tens_digit; /* Variable for tens digit */
	int ones_digit; /* Variable for ones digit */

	/* Print the combinations of two digits */
	for (tens_digit = 0; tens_digit <= 8; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');
			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

