#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by a new line,
 *              then prints the alphabet in uppercase, followed by a new line,
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase; /* Variable to store lowercase alphabet */
	char uppercase; /* Variable to store uppercase alphabet */

	/* Print lowercase alphabet */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	/* Print uppercase alphabet */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		putchar(uppercase);

	putchar('\n'); /* Print new line character */

	return (0);
}

