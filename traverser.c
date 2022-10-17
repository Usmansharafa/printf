#include "main.h"

/**
 * traverser - Traverses through the format and calls
 * functions responsible for handling different specifiers
 * @format: String to be printed out
 * @funcs: List of functions handling the different specifiers
 * @args: List of arguments
 * Return: Number of characters printed to stdout
 */
int traverser(const char *format, printer_t funcs[], va_list args)
{
	int len, temp, i = 0, j;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			for (j = 0; funcs[j].specifier != NULL; j++)
			{
				if (format[i + 1] == funcs[j].specifier[0])
				{
					temp = funcs[j].func(args);
					if (temp == -1)
						return (-1);
					len += temp;
					break;
				}
			}
			if (funcs[j].specifier == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else if (format[i] == 92)
		{
			i++;
			switch (format[i])
			{
			case 'n':
				len += _putchar('\n');
				break;
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	return (len);
}
