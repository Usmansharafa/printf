#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _putchar - Prints a character to stdout
 * @c: Character to be printed
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Prints a string to the stdout
 * @s: String to be printed
 * Return: Length of the printed string
 */
int print_str(char *s)
{
	int len = 0, i;

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}

/**
 * _strlen - Gets the length of string s
 * @s: String whose length is to be found
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;
	return (len);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: Number of digits in n
 */
int print_number(int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_unsigned_num - Prints an unsigned number
 * @n: Number to be printed
 * Return: Number of digits in n
 */
int print_unsigned_num(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}