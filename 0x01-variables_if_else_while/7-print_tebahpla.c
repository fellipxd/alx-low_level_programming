#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter; /* Variable to store the ASCII value of the letters */

	/* Print lowercase alphabet in reverse using putchar */
	for (letter = 122; letter >= 97; letter--)
		putchar(letter);

	putchar('\n'); /* Print new line character */

	return (0);
}

