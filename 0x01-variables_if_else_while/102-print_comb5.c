#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   Prints all possible combinations of two two-digit numbers
 *   ranging from 0 to 99, separated by a space. The numbers are printed
 *   in ascending order with each combination separated by a comma and
 *   followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1; /* Variable for the first two-digit number */
	int num2; /* Variable for the second two-digit number */

	/* Print the combinations of two two-digit numbers */
	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

