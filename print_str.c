#include "main.h"
#include <string.h>

int print_str(char *s)
{
	int len = strlen(s), i;

	for (i = 0; i < len; i++)
		print_char(s[i]);
	return (len);
}