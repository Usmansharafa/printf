#include "main.h"

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
