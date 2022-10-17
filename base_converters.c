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

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @arg: List of all the arguments passed to the program
 * Return: Number of symbols printed to stdout
 */
int print_octal(va_list arg)
{
	unsigned int num;
	int len;
	char *octal_rep;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal_rep[len] = '\0';
	print_rev(octal_rep);
	free(octal_rep);
	return (len);
}

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @arg: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_hex(va_list arg)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	print_rev(hex_rep);
	free(hex_rep);
	return (len);
}

/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @arg: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list arg)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;

	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	print_rev(hex_rep);
	free(hex_rep);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
