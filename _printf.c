#include "main.h"
#include <stdlib.h>

/**
 * _printf - Prints to the stdout
 * @format: What is to be printed
 * @...: Argument to be substituted in if necessary
 * Return: Length of printed output
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				len += _putchar((char)va_arg(args, int));
				break;
			case 'd':
				len += print_int(va_arg(args, int));
				break;
			case 'i':
				len += print_int(va_arg(args, int));
				break;
			case 's':
				len += print_str(va_arg(args, char *));
				break;
			case '%':
				len += _putchar('%');
				break;
			default:
				break;
			}
		}
		else if (format[i] == 92)
		{
			i++;
			switch (format[i])
			{
			case 'n':
				len += _putchar('\n');
				break;
			case 't':
				len += _putchar('\t');
				break;
			case '\\':
				len += _putchar(92);
				break;
			default:
				break;
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
