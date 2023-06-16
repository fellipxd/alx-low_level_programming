#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by ", " in ascending order, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit; /* Variable to store the ASCII value of the digits */

	/* Print the combinations of single-digit numbers */
	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n'); /* Print new line character */

	return (0);
}

