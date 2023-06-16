#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   Prints all possible combinations of single-digit numbers separated by ", "
 *   in ascending order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit; /* Variable for the digit */

	/* Print the combinations of single-digit numbers */
	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

