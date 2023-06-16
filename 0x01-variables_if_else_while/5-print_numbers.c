#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number; /* Variable to store the numbers */

	/* Print single digit numbers */
	for (number = 0; number < 10; number++)
		putchar(number + '0');

	putchar('\n'); /* Print new line character */

	return (0);
}

