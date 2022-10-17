#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int print_char(va_list arg);
int print_str(va_list arg);
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int print_number(int n);
int print_unsigned_num(unsigned int n);
int print_int(va_list arg);
int print_percent(va_list arg);
void print_base(char *s);
int print_unsigned_int(va_list arg);
int print_reversed(va_list arg);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_heX(va_list arg);
int hex_check(int num, char x);
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * struct printer - Data structure to link a format specifier
 * to the appropriate function
 * @specifier: Format specifier
 * @func: A pointer to the appropriate function
 */
typedef struct printer
{
	char *specifier;
	int (*func)(va_list);
} printer_t;

int traverser(const char *format, printer_t funcs[], va_list args);

#endif /* MAIN_H */
