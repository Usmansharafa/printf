#include <unistd.h>

/**
 * print_char - Prints a character to stdout
 * @c: Character to be printed
 * Return: 1
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
