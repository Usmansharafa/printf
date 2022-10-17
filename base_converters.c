#include "main.h"

/**
 * print_binary - Prints a binary digit to stdout
 * @arg: List of arguments
 * Return: Number of digits printed out
 */
int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	char *digit;
	int i, len;

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	digit = malloc(sizeof(char) * len + 1);
	if (digit == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			digit[i] = '0';
		else
			digit[i] = '1';
		num = num / 2;
	}
	digit[i] = '\0';
	print_rev(digit);
	free(digit);
	return (len);
}
