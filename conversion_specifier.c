#include <unistd.h>
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

	if (s)
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
	}
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
