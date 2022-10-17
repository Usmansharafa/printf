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
	int len;
	printer_t funcs[] = {
	    {"c", print_char},
	    {"s", print_str},
	    {"d", print_int},
	    {"i", print_int},
	    {"%", print_percent},
	    {"b", print_binary},
	    {"u", print_unsigned_int},
	    {"o", print_octal},
	    {"x", print_hex},
	    {"X", print_heX},
	    {NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len = traverser(format, funcs, args);
	va_end(args);
	return (len);
}
