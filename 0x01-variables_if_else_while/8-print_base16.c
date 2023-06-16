#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit; /* Variable to store the ASCII value of the digits */

	/* Print numbers of base 16 in lowercase using putchar */
	for (digit = 48; digit < 58; digit++)
		putchar(digit);

	for (digit = 97; digit < 103; digit++)
		putchar(digit);

	putchar('\n'); /* Print new line character */

	return (0);
}

