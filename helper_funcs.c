#include "main.h"
#include <unistd.h>

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
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * print_rev - Prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int j, len;

	len = _strlen(s);
	j = len - 1;
	for (; j >= 0; --j)
	{
		_putchar(s[j]);
	}
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