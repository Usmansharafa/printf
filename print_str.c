#include "main.h"

/**
 * print_str - Prints a string to the stdout
 * @s: String to be printed
 * Return: Length of string s
 */
int print_str(char *s)
{
	int len = _strlen(s), i;

	for (i = 0; i < len; i++)
		print_char(s[i]);
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
