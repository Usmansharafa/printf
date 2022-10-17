#include <stdlib.h>
#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @arg: List of arguments
 * Return: 1
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}

/**
 * print_str - Prints a string to the stdout
 * @arg: List of arguments
 * Return: Length of the printed string
 */
int print_str(va_list arg)
{
	int len = 0, i;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}

/**
 * print_percent - Prints a % character to stdout
 * @arg: List of arguments
 * Return: 1
 */
int print_percent(__attribute__((unused)) va_list arg)
{
	return (_putchar('%'));
}

/**
 * print_int - Prints an integer to stdout
 * @arg: List of arguments
 * Return: Number of digits in n
 */
int print_int(va_list arg)
{
	int len;
	int n = va_arg(arg, int);

	len = print_number(n);
	return (len);
}

/**
 * print_unsigned_int - Prints and unsigned integer to stdout
 * @arg: List of argument
 * Return: Number of digits printed out
 */
int print_unsigned_int(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	if (n == 0)
		return (print_unsigned_num(n));
	if (n < 1)
		return (-1);
	return (print_unsigned_num(n));
}
