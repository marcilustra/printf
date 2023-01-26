#ifndef _MAIN_
#define _MAIN_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);

/**
 * struct string_format - Structure
 *
 * @c: selector
 * @f: function paired with selector
 */

typedef struct string_format
{
	char *c;
	int (*f)(va_list);
} _format;

#endif


