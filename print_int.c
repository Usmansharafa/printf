#include "main.h"
#include <string.h>
#include <stdio.h>

int print_int(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; len++)
		putchar(s[i]);

	return (len);	
}