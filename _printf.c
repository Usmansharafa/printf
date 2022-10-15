#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, i = 0;
	char temp[4];

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'd'/* constant-expression */:
				/* code */
				len += print_int(itoa(va_arg(args, int), temp, 4));
				break;
			case 'c':
				len += print_char((char)va_arg(args, int));
				break;
			case 's':
				len += print_str(va_arg(args, char *));
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
				len++;
				print_char('\n');
				break;
			
			default:
				break;
			}
		}
		i++;
	}
	va_end(args);
	return (len);
}